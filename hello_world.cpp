#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem vindos ao jogo da adivinhação *" << endl;
    cout << "*************************************" << endl;

    int numero_secreto = 42;
    int chute;

    bool acertou = chute == numero_secreto;
    bool maior = chute > numero_secreto;

    cout << "Qual é o seu chute? ";
    cin >> chute;

    cout << "O valor do seu chute é: " << chute << endl;

    if (acertou) {
        cout << "Parabens! Você acertou o número secreto!" << endl;
    }
    else if (maior) {
        cout << "Seu chute foi maior que o número secreto" << endl;
    }
    else {
        cout << "Seu chute foi menor que o número secreto" << endl;
    }

    return 0;
}