#pragma once
#include <QDialog>
#include "CalculatriceException.hpp"
#include "calculatrice.h"
//#include "EnsembleEntier.h"
QT_BEGIN_NAMESPACE
namespace Ui { class IhmCalculatrice; }
QT_END_NAMESPACE

class IhmCalculatrice : public QDialog
{
    Q_OBJECT

public:
    IhmCalculatrice(QWidget *parent = nullptr);
    ~IhmCalculatrice();

private:
    Ui::IhmCalculatrice *ui;
    calculatrice *calc;
private slots:
    void on_btnChiffre_clicked();
    void on_btnOperation_clicked();
    void on_btnEfface_clicked();
    void on_btnEqual_clicked();
};

