/********************************************************************************
** Form generated from reading UI file 'finder.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDER_H
#define UI_FINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_finder
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *finder)
    {
        if (finder->objectName().isEmpty())
            finder->setObjectName("finder");
        finder->resize(400, 139);
        verticalLayout_2 = new QVBoxLayout(finder);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(finder);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(finder);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(finder);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(finder);

        QMetaObject::connectSlotsByName(finder);
    } // setupUi

    void retranslateUi(QDialog *finder)
    {
        finder->setWindowTitle(QCoreApplication::translate("finder", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("finder", "\320\237\320\276\320\270\321\201\320\272 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\320\265\320\271", nullptr));
        pushButton->setText(QCoreApplication::translate("finder", "\320\235\320\260\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finder: public Ui_finder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDER_H
