#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    string playerChoice;
    int computerChoice;
    
    cout << "PIEDRA, PAPEL O TIJERA --> ";
    cin >> playerChoice;
    computerChoice = rand() % 3;
    
    if (computerChoice == 0) {
        cout << "EL ordenador eligió piedra." << endl;
        if (playerChoice == "piedra") {
            cout << "Empate!" << endl;
        }
        else if (playerChoice == "papel") {
            cout << "Ganaste!" << endl;
        }
        else if (playerChoice == "tijera") {
            cout << "Perdiste!" << endl;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    }
    else if (computerChoice == 1) {
        cout << "El ordenador eligió papel." << endl;
        if (playerChoice == "piedra") {
            cout << "Perdiste!" << endl;
        }
        else if (playerChoice == "papel") {
            cout << "Empate!" << endl;
        }
        else if (playerChoice == "tijera") {
            cout << "Ganaste!" << endl;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    }
    else if (computerChoice == 2) {
        cout << "El ordenador eligió tijera." << endl;
        if (playerChoice == "piedra") {
            cout << "Ganaste!" << endl;
        }
        else if (playerChoice == "papel") {
            cout << "Perdiste!" << endl;
        }
        else if (playerChoice == "tijera") {
            cout << "Empate!" << endl;
        }
        else {
            cout << "Opción inválida." << endl;
        }
    }
    return 0;
}
