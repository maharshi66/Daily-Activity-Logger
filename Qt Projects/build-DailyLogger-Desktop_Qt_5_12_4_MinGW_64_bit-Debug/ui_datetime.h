/********************************************************************************
** Form generated from reading UI file 'datetime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIME_H
#define UI_DATETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dateTime
{
public:
    QGridLayout *gridLayout;
    QLabel *dateTimeLbl;

    void setupUi(QWidget *dateTime)
    {
        if (dateTime->objectName().isEmpty())
            dateTime->setObjectName(QString::fromUtf8("dateTime"));
        dateTime->resize(1024, 50);
        gridLayout = new QGridLayout(dateTime);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateTimeLbl = new QLabel(dateTime);
        dateTimeLbl->setObjectName(QString::fromUtf8("dateTimeLbl"));

        gridLayout->addWidget(dateTimeLbl, 0, 0, 1, 1);


        retranslateUi(dateTime);

        QMetaObject::connectSlotsByName(dateTime);
    } // setupUi

    void retranslateUi(QWidget *dateTime)
    {
        dateTime->setWindowTitle(QApplication::translate("dateTime", "Form", nullptr));
        dateTimeLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dateTime: public Ui_dateTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIME_H
