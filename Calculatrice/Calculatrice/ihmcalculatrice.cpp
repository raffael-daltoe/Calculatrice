#include "ihmcalculatrice.h"
#include "ui_ihmcalculatrice.h"
#include "calculatrice.h"
#include "CalculatriceException.hpp"
#include <QDialog>
#include <stdexcept>
#include <typeinfo>
#include <exception>
#include <iostream>
IhmCalculatrice::IhmCalculatrice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IhmCalculatrice)
{
    ui->setupUi(this);
    this->calc=new calculatrice();
    connect(ui->btn0,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn1,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn2,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn3,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn4,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn5,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn6,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn7,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn8,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));
    connect(ui->btn9,SIGNAL(clicked()),this,SLOT(on_btnChiffre_clicked()));

    connect(ui->btnAdd,SIGNAL(clicked()),this,SLOT(on_btnOperation_clicked()));
    connect(ui->btnDivise,SIGNAL(clicked()),this,SLOT(on_btnOperation_clicked()));
    connect(ui->btnMultiple,SIGNAL(clicked()),this,SLOT(on_btnOperation_clicked()));
    connect(ui->btnSoustrais,SIGNAL(clicked()),this,SLOT(on_btnOperation_clicked()));

    connect(ui->btnEfface,SIGNAL(clicked()),this,SLOT(on_btnEfface_clicked()));

    connect(ui->btnEgal,SIGNAL(clicked()),this,SLOT(on_btnEqual_clicked()));

}

IhmCalculatrice::~IhmCalculatrice()
{
    delete ui;
    delete this->calc;
}

void IhmCalculatrice::on_btnChiffre_clicked(){
ui->ecran->setText(this->calc->chiffre(sender()->objectName().right(1).toInt()));
}

void IhmCalculatrice::on_btnOperation_clicked(){
    if(this->calc->getExpressionValide() == false){
        calc->setExpressionValide(true);
        ui->ecran->setText(this->calc->operation(sender()->objectName().left(4)));
    }
}

void IhmCalculatrice::on_btnEfface_clicked(){
    if(this->calc->getop1() == true && this->calc->getop2() == false){
        this->calc->setop1(false);
        this->calc->setOperande1(0);
        ui->ecran->setText("");
    }
    else if(this->calc->getop1() == true && this->calc->getop2() == true){
        this->calc->setop2(false);
        this->calc->setOperande2(0);
        ui->ecran->setText("");
    }
    else{
        this->calc->setReset();
        ui->ecran->setText("");
    }
}

void IhmCalculatrice::on_btnEqual_clicked(){
    if(this->calc->getop1() == true && this->calc->getop2() == true && this->calc->getExpressionValide() == true){
        try {
            ui->ecran->setText(QString::number(this->calc->Calcule()));
            this->calc->setReset();
        }
        catch(CalculatriceException &e){
            this->calc->setReset();
            ui->ecran->setText((e.what()));
        }

    }
    else if(this->calc->getop1() == true && this->calc->getop2() == false && this->calc->getExpressionValide() == true){
        ui->ecran->setText("We don't have the second operator yet");
    }

}
