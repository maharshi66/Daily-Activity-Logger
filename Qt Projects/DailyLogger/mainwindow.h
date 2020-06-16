#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QList>
#include <QTableWidget>
#include <QStackedWidget>
#include <QTableWidget>

#include "datetime.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setUpheaderWidget();
    void setUpRightPanel();
    void setUpCenterWidget();
    void setUpLogTable();

private:
    Ui::MainWindow *ui;
    dateTime *dateTimeWidget;
    QStackedWidget *centreStackWidget;
    QTableWidget *activityLogTable;
};
#endif // MAINWINDOW_H
