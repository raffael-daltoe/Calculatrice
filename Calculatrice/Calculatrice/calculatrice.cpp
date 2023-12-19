#include "calculatrice.h"
//#include "EnsembleEntier.h"
#include "CalculatriceException.hpp"
#include <string>
#include <string.h>
#include <iomanip>
#include <cmath>
#include <stdexcept>
#include <typeinfo>
#include <exception>
#include <iostream>


calculatrice::calculatrice(){
    this->operateur ="";
    this->operande1 = 0;
    this->operande2 = 0;
    this->total =0;
    this->expressionValide=false;
    this->op1 = false;
    this->op2 = false;
}

QString calculatrice::chiffre(int valeur){
    QString retur = "";
    if(getOperateur()==""){
        this->setOperande1(this->getOperande1()*10+valeur);
        this->setop1(true);
        retur = (QString::number(this->getOperande1()));
    }
    else{
        this->setOperande2(this->getOperande2()*10+valeur);
        this->setop2(true);
        retur = (QString::number(this->getOperande2()));
    }
    return retur;
}

void calculatrice::setop1(bool v){
    this->op1 = v;
}

bool calculatrice::getop1(){
    return this->op1;
}

void calculatrice::setop2(bool v){
    this->op2 = v;
}

bool calculatrice::getop2(){
    return this->op2;
}

int calculatrice::div(int v1, int v2) noexcept(false){
    if( v2 == 0){
        throw CalculatriceException(CalculatriceException::DIVISION_PAR_ZERO);
    }
    else{
        return int(round(float(v1/v2)));
    }
}

int calculatrice::mult(int v1, int v2) noexcept(false){
    if( v1 + v2 > 4096){
        throw CalculatriceException(CalculatriceException::NB_TROP_GRAND);
    }
    else{
        return int(v1*v2);
    }
}

int calculatrice::som(int v1, int v2) noexcept(false){
    if( v1 + v2 > 4096){
        throw CalculatriceException(CalculatriceException::NB_TROP_GRAND);
    }
    else{
        return int(v1+v2);
    }
}

QString calculatrice::operation(QString valeur){
    if (valeur == "btnD"){
        this->setOperator("/");
    }
    else if( valeur == "btnM"){
        this->setOperator("*");
    }
    else if( valeur == "btnA"){
        this->setOperator("+");
    }
    else{
        this->setOperator("-");
    }
    return this->getOperateur();
}

QString calculatrice::getOperateur(){
    return this->operateur;
}
void calculatrice::setOperator(QString valeur){
    this->operateur = valeur;
}
int calculatrice::getOperande1(){
    return this->operande1;
}
void calculatrice::setOperande1(int valeur){
    this->operande1 = valeur;
}
int calculatrice::getOperande2(){
    return this->operande2;
}
void calculatrice::setOperande2(int valeur){
    this->operande2 = valeur;
}

void calculatrice::setTotal(int valeur){
    this->total = valeur;
}

void calculatrice::setReset(){
    this->setTotal(0);
    this->setOperande1(0);
    this->setOperande2(0);
    this->setOperator("");
    this->setop1(false);
    this->setop2(false);
    this->setExpressionValide(false);
}

int calculatrice::getTotal(){
    return this->total;
}

int calculatrice::Calcule(){
    if(this->getExpressionValide() == true){
        if( getOperateur() == "/"){
            this->setTotal(div(getOperande1(),getOperande2()));
        }
        else if(getOperateur() == '*'){
            this->setTotal(mult(getOperande1(),getOperande2()));
        }
        else if( getOperateur() == "+"){
            this->setTotal(som(getOperande1(),getOperande2()));
        }
        else{
            this->setTotal(getOperande1()-getOperande2());
        }
    }
    return ((this->getTotal()));
}

bool calculatrice::getExpressionValide(){
    return this->expressionValide;
}
void calculatrice::setExpressionValide(bool valeur){
    this->expressionValide = valeur;
}


