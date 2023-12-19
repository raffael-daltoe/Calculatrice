/********************************************************************************
** Form generated from reading UI file 'ihmcalculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHMCALCULATRICE_H
#define UI_IHMCALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IhmCalculatrice
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn0;
    QPushButton *btn6;
    QPushButton *btn2;
    QPushButton *btn7;
    QPushButton *btn5;
    QPushButton *btnEfface;
    QPushButton *btnEgal;
    QPushButton *btn3;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn1;
    QPushButton *btn4;
    QPushButton *btnMultiple;
    QPushButton *btnSoustrais;
    QPushButton *btnAdd;
    QPushButton *btnDivise;
    QLineEdit *ecran;

    void setupUi(QDialog *IhmCalculatrice)
    {
        if (IhmCalculatrice->objectName().isEmpty())
            IhmCalculatrice->setObjectName(QString::fromUtf8("IhmCalculatrice"));
        IhmCalculatrice->resize(800, 600);
        verticalLayoutWidget = new QWidget(IhmCalculatrice);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 110, 381, 370));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn0 = new QPushButton(verticalLayoutWidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn0, 13, 1, 1, 1);

        btn6 = new QPushButton(verticalLayoutWidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn6, 10, 2, 1, 1);

        btn2 = new QPushButton(verticalLayoutWidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn2, 11, 1, 1, 1);

        btn7 = new QPushButton(verticalLayoutWidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn7, 9, 0, 1, 1);

        btn5 = new QPushButton(verticalLayoutWidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn5, 10, 1, 1, 1);

        btnEfface = new QPushButton(verticalLayoutWidget);
        btnEfface->setObjectName(QString::fromUtf8("btnEfface"));
        btnEfface->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnEfface, 13, 2, 1, 1);

        btnEgal = new QPushButton(verticalLayoutWidget);
        btnEgal->setObjectName(QString::fromUtf8("btnEgal"));
        sizePolicy.setHeightForWidth(btnEgal->sizePolicy().hasHeightForWidth());
        btnEgal->setSizePolicy(sizePolicy);
        btnEgal->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnEgal, 13, 0, 1, 1);

        btn3 = new QPushButton(verticalLayoutWidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn3, 11, 2, 1, 1);

        btn8 = new QPushButton(verticalLayoutWidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setMaximumSize(QSize(50, 50));
        btn8->setIconSize(QSize(5, 5));

        gridLayout->addWidget(btn8, 9, 1, 1, 1);

        btn9 = new QPushButton(verticalLayoutWidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn9, 9, 2, 1, 1);

        btn1 = new QPushButton(verticalLayoutWidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn1, 11, 0, 1, 1);

        btn4 = new QPushButton(verticalLayoutWidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btn4, 10, 0, 1, 1);

        btnMultiple = new QPushButton(verticalLayoutWidget);
        btnMultiple->setObjectName(QString::fromUtf8("btnMultiple"));
        btnMultiple->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnMultiple, 13, 3, 1, 1);

        btnSoustrais = new QPushButton(verticalLayoutWidget);
        btnSoustrais->setObjectName(QString::fromUtf8("btnSoustrais"));
        btnSoustrais->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnSoustrais, 11, 3, 1, 1);

        btnAdd = new QPushButton(verticalLayoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnAdd, 10, 3, 1, 1);

        btnDivise = new QPushButton(verticalLayoutWidget);
        btnDivise->setObjectName(QString::fromUtf8("btnDivise"));
        btnDivise->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnDivise, 9, 3, 1, 1);

        ecran = new QLineEdit(verticalLayoutWidget);
        ecran->setObjectName(QString::fromUtf8("ecran"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ecran->sizePolicy().hasHeightForWidth());
        ecran->setSizePolicy(sizePolicy1);
        ecran->setMaximumSize(QSize(700, 700));

        gridLayout->addWidget(ecran, 0, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(IhmCalculatrice);

        QMetaObject::connectSlotsByName(IhmCalculatrice);
    } // setupUi

    void retranslateUi(QDialog *IhmCalculatrice)
    {
        IhmCalculatrice->setWindowTitle(QCoreApplication::translate("IhmCalculatrice", "IhmCalculatrice", nullptr));
        btn0->setText(QCoreApplication::translate("IhmCalculatrice", "0", nullptr));
        btn6->setText(QCoreApplication::translate("IhmCalculatrice", "6", nullptr));
        btn2->setText(QCoreApplication::translate("IhmCalculatrice", "2", nullptr));
        btn7->setText(QCoreApplication::translate("IhmCalculatrice", "7", nullptr));
        btn5->setText(QCoreApplication::translate("IhmCalculatrice", "5", nullptr));
        btnEfface->setText(QCoreApplication::translate("IhmCalculatrice", "Efface", nullptr));
        btnEgal->setText(QCoreApplication::translate("IhmCalculatrice", "=", nullptr));
        btn3->setText(QCoreApplication::translate("IhmCalculatrice", "3", nullptr));
        btn8->setText(QCoreApplication::translate("IhmCalculatrice", "8", nullptr));
        btn9->setText(QCoreApplication::translate("IhmCalculatrice", "9", nullptr));
        btn1->setText(QCoreApplication::translate("IhmCalculatrice", "1", nullptr));
        btn4->setText(QCoreApplication::translate("IhmCalculatrice", "4", nullptr));
        btnMultiple->setText(QCoreApplication::translate("IhmCalculatrice", "*", nullptr));
        btnSoustrais->setText(QCoreApplication::translate("IhmCalculatrice", "-", nullptr));
        btnAdd->setText(QCoreApplication::translate("IhmCalculatrice", "+", nullptr));
        btnDivise->setText(QCoreApplication::translate("IhmCalculatrice", "/", nullptr));
        ecran->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IhmCalculatrice: public Ui_IhmCalculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHMCALCULATRICE_H
