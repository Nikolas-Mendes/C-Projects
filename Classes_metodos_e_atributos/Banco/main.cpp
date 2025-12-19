#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

int main()
{
    Titular titular1(Cpf("123.456.789-10"), "Nikolas");
    Conta umaConta("123456", titular1);

    umaConta.depositar(2570);
    umaConta.sacar(1945);

    Titular titular2(Cpf("234.567.891-01"), "Teste");
    Conta umaOutraConta("654321", titular2);
    
    umaOutraConta.depositar(800);
    umaOutraConta.sacar(249);

    cout << "Conta 1: " << endl;
    cout << umaConta << endl;

    cout << endl;

    cout << "Conta 2: " << endl;
    cout << umaOutraConta << endl;

    cout << endl;

    cout << "Total de Contas: " << Conta::getNumeroDeContas() << endl;
 
    return 0;
}