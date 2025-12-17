#include <iostream>
#include "letra_existe.hpp"
#include "chute.hpp"

void chute (std::map<char, bool>& chutou, std::vector<char>& chutes_errados){
    std::cout << "Seu chute: " << std::endl;
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if (letra_existe(chute)){
        std::cout << "Você Acertou! Seu chute está na palavra!" << std::endl;
    }
    else {
        std::cout << "Você Errou! Seu chute não está na palavra!" << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}