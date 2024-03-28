#include<bits/stdc++.h>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem vindos ao jogo da adivinhação *" << endl;
    cout << "*************************************" << endl;

    bool nao_acertou = true;
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    int tentativas = 0;

    double pontos = 1000.0;

    cout << "Escolha o seu nível de dificuldade: " << endl;
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

    while(nao_acertou && tentativas <= numero_de_tentativas) {
        tentativas++;
        int chute;
        cout << "Qual é o seu chute? ";
        cin >> chute;
        cout << "O valor do seu chute é: " << chute << endl;

        int pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2;
        pontos -= pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou) {
            cout << "Parabens! Você acertou o número secreto!" << endl;
            nao_acertou = false;
            cout << "Voce acertou em " << tentativas << " tentativas" << endl;
            cout << "Pontos: " << fixed << pontos << endl;
        }
        else if (maior) {
            cout << "Seu chute foi maior que o número secreto" << endl;
        }
        else {
            cout << "Seu chute foi menor que o número secreto" << endl;
        }
    }
    cout << "O numero era " << NUMERO_SECRETO << endl;
    cout << "Fim de jogo!" << endl;
    cout.precision(2);
    return 0;
}