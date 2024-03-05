#include "anket.h"
#include "ui_anket.h"

Anket::Anket(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Anket)
{
    ui->setupUi(this);
}

Anket::~Anket()
{
    delete ui;
}

QString Anket::execAProc(QString& data)
{
    QString str;

    str = "DECLARE @dateB DATETIME SET @dateB = '" + ui->birthday->text() + "' EXEC dbo.applyForAJob " + data + "," + ui->workerId->text()
          + "," + ui->family->text() + "," + ui->name->text() + "," + ui->secondName->text()
          + ", @dateB "+ "," + ui->gender->currentText();

    return str;
}
