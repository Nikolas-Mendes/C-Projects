#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.getSaldo() << endl;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Nikolas");
    Conta umaConta("123456", titular);

    umaConta.depositar(500);
    umaConta.sacar(200);

    ExibeSaldo(umaConta);

    Titular titular(Cpf("123.456.789-10"), "Teste");
    Conta umaOutraConta("654321", titular);
    
    umaOutraConta.depositar(300);
    umaOutraConta.sacar(50);

    ExibeSaldo(umaOutraConta);

    cout << "Número de Contas: " << Conta::getNumeroDeContas() << endl;
 
    return 0;
}