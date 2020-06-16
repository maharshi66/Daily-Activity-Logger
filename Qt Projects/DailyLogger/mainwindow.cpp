#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dateTimeWidget = new dateTime();
    ui->headerWidgetLayout->addWidget(dateTimeWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

