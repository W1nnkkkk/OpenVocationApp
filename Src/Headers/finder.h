#ifndef FINDER_H
#define FINDER_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <QSqlQueryModel>

namespace Ui {
class finder;
}

class finder : public QDialog
{
    Q_OBJECT

public:
    explicit finder(QSqlQueryModel *model, QSqlDatabase& db, QWidget *parent = nullptr);
    ~finder();

    QString findQuery();

private slots:
    void on_pushButton_clicked();

private:
    Ui::finder *ui;

    QSqlQueryModel* thisModel;
    QSqlDatabase db;
};

#endif // FINDER_H
