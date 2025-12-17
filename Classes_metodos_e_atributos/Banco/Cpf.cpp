#include <string>
#include "Cpf.hpp"

Cpf(std::string numero)
    :numero(numero)
{
}

std::string Cpf::getNumero() const{
    return numero;
}
