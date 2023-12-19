#pragma once

#include <stdexcept>
#include <typeinfo>
#include <exception>

using namespace std;

class CalculatriceException : public exception{
    public:
        enum Raison{
            DIVISION_PAR_ZERO,
            NB_TROP_GRAND
        };
        CalculatriceException(Raison cs) noexcept;
        const char* what() const noexcept;
    private:
        Raison cause;
};
