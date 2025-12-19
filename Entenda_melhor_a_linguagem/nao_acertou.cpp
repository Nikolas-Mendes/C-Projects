#include "nao_acertou.hpp"

bool nao_acertou (std::string& palavra_secreta, const std::map<char, bool>& chutou){
    for (char letra : palavra_secreta){
        auto it = chutou.find(letra);

        if (it == chutou.end() || !it->second){
            return true;
        }
    }
    return false;
}