#ifndef DATETIME_H
#define DATETIME_H

#include <QWidget>
#include <QTimer>
#include <QDate>

namespace Ui {
class dateTime;
}

class dateTime : public QWidget
{
    Q_OBJECT

public:
    explicit dateTime(QWidget *parent = nullptr);
    ~dateTime();

private:
    Ui::dateTime *ui;
    QTimer timer;

public slots:
    void updateDateTime();

};

#endif // DATETIME_H
