#include "Cpf.hpp"

Cpf::Cpf(std::string numero):numero(numero)
{
}

std::string Cpf::getNumero() const{
    return numero;
}
