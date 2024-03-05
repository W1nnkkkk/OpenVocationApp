#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "anket.h"

class QTableWidget;
class QSqlQueryModel;
class finder;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    friend finder;

private slots:
    void on_vocationButton_clicked();

    void on_workButton_clicked();

    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    Anket akt;
    finder* dialog;

    void doQuery();

    void getOnJob(const int& row, const int& column);
};
#endif // MAINWINDOW_H
