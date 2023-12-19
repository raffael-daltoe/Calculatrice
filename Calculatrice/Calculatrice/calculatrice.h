#pragma once
#include <QString>


class calculatrice {
public:
    calculatrice();
    QString chiffre(int valeur);
    QString getOperateur();
    void setOperator(QString valeur);
    int getOperande1();
    void setOperande1(int valeur);
    int getOperande2();
    void setOperande2(int valeur);
    void setTotal(int valeur);
    int getTotal();
    bool getExpressionValide();
    void setExpressionValide(bool valeur);
    int div(int v1, int v2) noexcept(false);
    int mult(int v1, int v2) noexcept(false);
    int som(int v1, int v2) noexcept(false);
    int sub(int v1, int v2);
    QString operation(QString valeur);
    void setop1(bool v);
    bool getop1();
    void setop2(bool v);
    bool getop2();
    void setReset();
    int Calcule();

private:
    QString operateur;
    int operande1,operande2,total;
    bool op1,op2;
    bool expressionValide;
};
