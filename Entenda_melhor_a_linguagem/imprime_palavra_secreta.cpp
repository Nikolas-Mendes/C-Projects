#include <iostream>
#include "imprime_palavra_secreta.hpp"

void imprime_palavra_secreta (
    const std::string& palavra_secreta, 
    const std::map<char, bool>& chutou)
{
    for (char letra : palavra_secreta){
        auto it = chutou.find(letra);

        if (it != chutou.end() && it->second){
            std::cout << letra << " ";
	    }
        else {
            std::cout << "_ ";
	    }
    }
    std::cout << std::endl;
}