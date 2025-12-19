#include "Titular.hpp"
#include <iostream>
#include "Cpf.hpp"

Titular::Titular(Cpf cpf, std::string nome)
    :cpf(cpf), nome(nome)
{
    verificaTamanhoDoNome();
}

std::string Titular::getNome() const{
    return nome;
}

const Cpf& Titular::getCpf() const {
    return cpf;
}

void Titular::verificaTamanhoDoNome()
{
    if (nome.size() < 5){
        std::cout << "Nome muito curto" << std::endl;
	exit(1);
    }
}