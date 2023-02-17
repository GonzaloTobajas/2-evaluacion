#include <iostream>
#include <cstdlib>
#include <ctime>
//Genera un número entre 1 y 10, si sale mayor de 5 ganas y sino pierdes.
using namespace std;

int main() {
  int dinero = 100;
  int apuesta;
  int numeroAleatorio;
  char seguirApostando = 's';

  srand(time(0));

  while (seguirApostando == 's' && dinero > 0) {
    cout << "Tienes " << dinero << "$ ANTONIOCOINS. ¿Cuántas quieres apostar quieres apostar? ";
    cin >> apuesta;

    if (apuesta > dinero) {
      cout << "No puedes apostar más dinero del que tienes." << endl;
      continue;
    }

    numeroAleatorio = rand() % 10 + 1;
    cout << "El número aleatorio es: " << numeroAleatorio << endl;

    if (numeroAleatorio >= 5) {
      cout << "¡Ganaste! Obtienes " << apuesta * 2 << "$ ANTONIOCOINS." << endl;
      dinero += apuesta;
    } else {
      cout << "Lo siento, perdiste " << apuesta << "$ ANTONIOCOINS." << endl;
      dinero -= apuesta;
    }

    cout << "¿Quieres seguir apostando? (s/n) ";
    cin >> seguirApostando;
  }

  cout << "Gracias por jugar. ¡Hasta la próxima!" << endl;

  return 0;
}
