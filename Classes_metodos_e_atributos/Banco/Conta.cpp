#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta (std::string numero, Titular titular):
    numero(numero), 
    titular(titular),
    saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0){
	std::cout << "Valor Inválido" << std::endl;
        return;
    }

    if (valorASacar > saldo){
	std::cout << "Saldo Insuficiente" << std::endl;
        return;
    }

    saldo -= valorASacar;

}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0){
	std::cout << "Valor Inválido" << std::endl;
        return;
    }
   
    saldo += valorADepositar;
}

std::string Conta::getNumero() const{
    return numero;
}

float Conta::getSaldo () const{
    return saldo;
}

int Conta::getNumeroDeContas()
{
    return numeroDeContas;
}

std::ostream& operator<<(std::ostream& os, const Conta& conta)
{
    os << "Titular: " << conta.titular.getNome() << "\n"
       << "CPF: " << conta.titular.getCpf().getNumero() << "\n"
       << "Conta: " << conta.getNumero() << "\n"
       << "Saldo: R$ " << conta.getSaldo();

    return os;
}
