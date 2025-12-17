#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int getNumeroDeContas();

private:
    std::string numero;
    Titular titular;
    float saldo;

public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    std::string getNumero() const;
    float getSaldo() const;
}