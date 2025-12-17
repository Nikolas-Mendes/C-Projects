#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "imprime_cabecalho.hpp"
#include "imprime_chutes_errados.hpp"
#include "imprime_palavra_secreta.hpp"
#include "chute.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "adiciona_palavra.hpp"
#include "salva_arquivo.hpp"
using namescape std;

static string palavra_secreta;
static map<char, bool> chutou;
static vector<char> chutes_errados;

int main () {
    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while (nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){
	imprime_chutes_errados(chutes_errados);

	imprime_palavra_secreta(palavra_secreta, chutou);

	chute(chutou, chutes_errados);	
    }

    cout << "Fim de Jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;

    if (nao_acertou(palavra_secreta, chutou)){
	cout << "Você Perdeu! Tente Novamente!" << endl;
    }
    else {
	cout << "Parabéns! Você acertou a palavra secreta!" << endl;
	
	cout << "Você deseja adicionar uma nova palavra ao banco de palavras? (S/N)";
	char resposta;
	cin >> resposta;

	if (resposta == 'S'){
	    adiciona_palavra();
	}
    }

    cin.get();
} 