#include <iostream>
#include "letra_existe.hpp"
#include "chute.hpp"

void chute (std::map<char, bool>& chutou, std::vector<char>& chutes_errados){
    std::cout << "Seu chute: " << std::endl;
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if (letra_existe(chute)){
        std::cout << "Voce Acertou! Seu chute esta na palavra!" << std::endl;
    }
    else {
        std::cout << "Voce Errou! Seu chute nao esta na palavra!" << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}