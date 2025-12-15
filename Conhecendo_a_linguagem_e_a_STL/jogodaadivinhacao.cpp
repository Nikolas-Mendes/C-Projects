#include<iostream>;
#include<cstdlib>;
#include<ctime>;
using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao Jogo da Adivinhação *" << endl;
    cout << "*************************************" << endl;   

    cout << "Escolha um Nível de Dificuldade"     << endl;   
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;   

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if (dificuldade == 'F') {
	numero_de_tentativas = 15;
    } 
    else if (dificuldade == 'M') {
	numero_de_tentativas = 10;
    }
    else {
	numero_de_tentativas = 5;
    }

    srand(time(null));
    const int NUMERO_SECRETO = rand() % 100; 

    bool nao_acertou = true;
    int tentativas   = 0;
    double pontos    = 1000.0;

    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {	
	int chute;
    
	cout << "Tentativa: " << tentativas << endl;
   	cout << "Qual seu chute? ";
    	cin >> chute;

	double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
	pontos = pontos - pontos_perdidos;

    	cout << "O valor do seu chute foi: " << chute << endl;

	bool acertou = chute == NUMERO_SECRETO;
	bool maior   = chute >  NUMERO_SECRETO;

    	if (acertou) {
	    cout << "Parabéns, você acertou o número secreto!" << endl;
    	    nao_acertou = false;
            break;
	}
    	else if (maior) {
    	    cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else {
	    cout << "Seu chute foi menor que o número secreto!" << endl;
	}
    }

    cout << "Fim de Jogo!" << endl;   
    
    if (nao_acertou) {
	cout << "Você Perdeu! Tente novamente!" << endl;
    }
    else {
        cout << "Total de Tentativas: " << tentativas << endl; 
        cout.precision(2);
        cout << fixed;
        cout << "Sua Pontuação foi de: " << pontos << " pontos." << endl; 
    }
}