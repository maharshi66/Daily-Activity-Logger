#include "datetime.h"
#include "ui_datetime.h"

dateTime::dateTime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dateTime)
{
    ui->setupUi(this);
    this->timer.start(1000);
    connect(&(this->timer), SIGNAL(timeout()), this, SLOT(updateDateTime()));

}

dateTime::~dateTime()
{
    delete ui;
}

void dateTime::updateDateTime()
{
    ui->dateTimeLbl->setText(QString("%1 %2").arg(QDate::currentDate().toString()).arg(QTime::currentTime().toString()));

}
