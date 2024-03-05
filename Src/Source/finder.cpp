#include "finder.h"
#include "ui_finder.h"
#include "mainwindow.h"

finder::finder(QSqlQueryModel* model, QSqlDatabase& db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::finder)
{
    ui->setupUi(this);

    this->thisModel = model;
    this->db = db;
}

finder::~finder()
{
    delete ui;
}

QString finder::findQuery()
{
    QString query = "SELECT * FROM dbo.findPosition ('" + ui->lineEdit->text() + "')";
    return query;
}

void finder::on_pushButton_clicked()
{
    thisModel->setQuery(findQuery(), db);
}

