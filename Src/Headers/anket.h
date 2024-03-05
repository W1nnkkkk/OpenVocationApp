#ifndef ANKET_H
#define ANKET_H

#include <QDialog>

namespace Ui {
class Anket;
}

class Anket : public QDialog
{
    Q_OBJECT

public:
    explicit Anket(QWidget *parent = nullptr);

    ~Anket();

    QString execAProc(QString& data);

private:
    Ui::Anket *ui;
};

#endif // ANKET_H
