#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QPushButton>
#include <QStackedWidget>
#include <QTableWidget>
#include <QHeaderView>
#include <QCheckBox>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Daily Activity Logger");
    setUpheaderWidget();
    setUpRightPanel();
    setUpCenterWidget();

    QFile styleFile(":/qss/logger.qss");
    if (!styleFile.open(QIODevice::ReadOnly | QFile::Text)){
              qDebug() << "Cannot Open file";
      }

      //Apply the loaded stylesheet
      QString style = QLatin1String( styleFile.readAll() );
      this->setStyleSheet( style );

    QPushButton *logAllBtn = new QPushButton;
    logAllBtn->setText("LOG");
    ui->allWidgetsLayout->addWidget(logAllBtn,2,2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setUpheaderWidget()
{
    this->dateTimeWidget = new dateTime();
    QGridLayout *headerWidgetLayout = new QGridLayout;
    ui->allWidgetsLayout->addLayout(headerWidgetLayout,0,2,1,1);
    headerWidgetLayout->addWidget(dateTimeWidget);
}

void MainWindow::setUpRightPanel()
{
    QGridLayout *rightPanelLayout = new QGridLayout;
    QPushButton *openLogFolderBtb  = new QPushButton;
    openLogFolderBtb->setText("LOG FOLDER");
    rightPanelLayout->addWidget(openLogFolderBtb);
    ui->allWidgetsLayout->addLayout(rightPanelLayout,0,0);
}

void MainWindow::setUpCenterWidget()
{
    this->setUpLogTable();
    this->centreStackWidget = new QStackedWidget;
    centreStackWidget->addWidget(this->activityLogTable);
    ui->allWidgetsLayout->addWidget(centreStackWidget,1,0,1,3);
}

void MainWindow::setUpLogTable()
{
    QStringList headers = {"ACTIVITY","ON-GOING","INCOMPLETE","COMPLETE", "NOTE"};
    this->activityLogTable = new QTableWidget;
    activityLogTable->setRowCount(10);
    activityLogTable->setColumnCount(5);
    activityLogTable->setHorizontalHeaderLabels(headers);
    activityLogTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    activityLogTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            QCheckBox *statusCheck = new QCheckBox;
            this->activityLogTable->setCellWidget(i,j,statusCheck);
        }
    }

    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= 0; j++)
        {
            QLineEdit *activityLine = new QLineEdit;
            this->activityLogTable->setCellWidget(i,j,activityLine);
        }
    }

    for(int i = 0; i <= 10; i++)
    {
        for(int j = 4; j <= 4; j++)
        {
            QLineEdit *notesLine = new QLineEdit;
            this->activityLogTable->setCellWidget(i,j,notesLine);
        }
    }
}

