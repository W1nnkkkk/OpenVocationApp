/********************************************************************************
** Form generated from reading UI file 'anket.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANKET_H
#define UI_ANKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Anket
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *workerId;
    QLabel *label_2;
    QLineEdit *family;
    QLabel *label_3;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *secondName;
    QLineEdit *birthday;
    QLabel *label_6;
    QComboBox *gender;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QPushButton *okButton;

    void setupUi(QDialog *Anket)
    {
        if (Anket->objectName().isEmpty())
            Anket->setObjectName("Anket");
        Anket->resize(428, 325);
        verticalLayout = new QVBoxLayout(Anket);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(Anket);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        workerId = new QLineEdit(Anket);
        workerId->setObjectName("workerId");

        formLayout->setWidget(0, QFormLayout::FieldRole, workerId);

        label_2 = new QLabel(Anket);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        family = new QLineEdit(Anket);
        family->setObjectName("family");

        formLayout->setWidget(2, QFormLayout::FieldRole, family);

        label_3 = new QLabel(Anket);
        label_3->setObjectName("label_3");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        name = new QLineEdit(Anket);
        name->setObjectName("name");

        formLayout->setWidget(4, QFormLayout::FieldRole, name);

        label_4 = new QLabel(Anket);
        label_4->setObjectName("label_4");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        secondName = new QLineEdit(Anket);
        secondName->setObjectName("secondName");

        formLayout->setWidget(6, QFormLayout::FieldRole, secondName);

        birthday = new QLineEdit(Anket);
        birthday->setObjectName("birthday");

        formLayout->setWidget(8, QFormLayout::FieldRole, birthday);

        label_6 = new QLabel(Anket);
        label_6->setObjectName("label_6");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_6);

        gender = new QComboBox(Anket);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");

        formLayout->setWidget(10, QFormLayout::FieldRole, gender);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(11, QFormLayout::FieldRole, horizontalSpacer);

        label_5 = new QLabel(Anket);
        label_5->setObjectName("label_5");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_5);


        verticalLayout->addLayout(formLayout);

        okButton = new QPushButton(Anket);
        okButton->setObjectName("okButton");

        verticalLayout->addWidget(okButton);


        retranslateUi(Anket);
        QObject::connect(okButton, &QPushButton::clicked, Anket, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Anket);
    } // setupUi

    void retranslateUi(QDialog *Anket)
    {
        Anket->setWindowTitle(QCoreApplication::translate("Anket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Anket", "\320\235\320\276\320\274\320\265\321\200 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260: ", nullptr));
        label_2->setText(QCoreApplication::translate("Anket", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Anket", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Anket", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("Anket", "\320\237\320\276\320\273", nullptr));
        gender->setItemText(0, QCoreApplication::translate("Anket", "\320\234", nullptr));
        gender->setItemText(1, QCoreApplication::translate("Anket", "\320\226", nullptr));

        label_5->setText(QCoreApplication::translate("Anket", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        okButton->setText(QCoreApplication::translate("Anket", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Anket: public Ui_Anket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANKET_H
