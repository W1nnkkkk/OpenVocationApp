#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSql>
#include <QtSql/QSqlQueryModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QSqlQuery>
#include <QSql>
#include "finder.h"

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QSqlQueryModel;
    ui->tableView->setModel(model);

    db.setDatabaseName("DRIVER={SQL Server};SERVER=DESKTOP-ODUE3SG;DATABASE=sotrydniki;");
    db.setUserName("admin");
    db.setPassword("123");

    if (db.open())
    {}
    else
    {
        QMessageBox::warning(this, "Warning", "Data Base not open");
    }

    dialog = new finder(model, db);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_vocationButton_clicked()
{
    doQuery();
}


void MainWindow::on_workButton_clicked()
{
    // Получаем QItemSelectionModel из QTableView
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();

    // Получаем список индексов выбранных элементов
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    int row = 0;
    int column = 0;
    int count = 1;

    // Проходим по списку индексов и обрабатываем их
    for(const QModelIndex &index : selectedIndexes) {
        row = index.row();
        column = index.column();
        if(count > 1)
        {
            QMessageBox::warning(this, "Warning", "Выбрано больше одного элемента! Пожалуйста выберите один элемент");
            break;
        }
        count++;
    }

    akt.show();
    akt.exec();

    getOnJob(row, column);
}

void MainWindow::getOnJob(const int& row, const int& column)
{
    QVariant varinat = model->data(model->index(row,column));

    QString data = QVariant(varinat).toString();

    model->setQuery(akt.execAProc(data));

    doQuery();
}

void MainWindow::doQuery()
{
    model->setQuery("SELECT * FROM openVoc", db);
}

void MainWindow::on_action_triggered()
{
    dialog->show();
}

