
#include "CalculatriceException.hpp"
#include <QString>

CalculatriceException::CalculatriceException(Raison cs) noexcept{
    this->cause = cs;
}

const char* CalculatriceException::what() const noexcept{
    char *raison = nullptr;

    switch(this->cause){
        case DIVISION_PAR_ZERO:
            raison = QString("Division par zéro\n").toLocal8Bit().data();
            break;
        case NB_TROP_GRAND:
            raison=QString("Dépassement de la capacité d'affichage\n").toLocal8Bit().data();
            break;
    }
    return raison;
}
