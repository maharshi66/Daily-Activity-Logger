/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *RightPanelLayout;
    QPushButton *OpenLogFolderBtn;
    QPushButton *OpenLogBtn;
    QStackedWidget *stackedWidget;
    QWidget *HomePage;
    QGridLayout *gridLayout_5;
    QWidget *LogHistoryPage;
    QGridLayout *gridLayout_4;
    QGridLayout *headerWidgetLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RightPanelLayout = new QGridLayout();
        RightPanelLayout->setObjectName(QString::fromUtf8("RightPanelLayout"));
        OpenLogFolderBtn = new QPushButton(centralwidget);
        OpenLogFolderBtn->setObjectName(QString::fromUtf8("OpenLogFolderBtn"));

        RightPanelLayout->addWidget(OpenLogFolderBtn, 2, 0, 1, 1);

        OpenLogBtn = new QPushButton(centralwidget);
        OpenLogBtn->setObjectName(QString::fromUtf8("OpenLogBtn"));

        RightPanelLayout->addWidget(OpenLogBtn, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        gridLayout_5 = new QGridLayout(HomePage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        stackedWidget->addWidget(HomePage);
        LogHistoryPage = new QWidget();
        LogHistoryPage->setObjectName(QString::fromUtf8("LogHistoryPage"));
        gridLayout_4 = new QGridLayout(LogHistoryPage);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stackedWidget->addWidget(LogHistoryPage);

        RightPanelLayout->addWidget(stackedWidget, 1, 2, 2, 1);

        headerWidgetLayout = new QGridLayout();
        headerWidgetLayout->setObjectName(QString::fromUtf8("headerWidgetLayout"));

        RightPanelLayout->addLayout(headerWidgetLayout, 1, 1, 1, 1);


        gridLayout->addLayout(RightPanelLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        OpenLogFolderBtn->setText(QApplication::translate("MainWindow", "Open Log Folder", nullptr));
        OpenLogBtn->setText(QApplication::translate("MainWindow", "Open Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
