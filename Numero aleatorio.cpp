#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0));
  int random = rand() % 10 + 1;
  int adv;
  std::cout << "Adivina un número entre 1 y 10: ";
  std::cin >> adv;
  if (adv == random) {
    std::cout << "¡Adivinaste!" << std::endl;
  } else {
    std::cout << "Lo siento, el número era " << random << std::endl;
  }
  return 0;
}