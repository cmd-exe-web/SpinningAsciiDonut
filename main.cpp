#include <cmath>
#include <iostream>
#include <unistd.h>
using namespace std;

void clearScreen() { std::cout << "\033[2J\033[H"; }

int main() {
  int radius = 20;

  for (float a = 0; a <= 2 * M_PI; a += 0.1) {
    clearScreen();
    for (int i = -radius; i <= radius; i++) {
      for (int j = -radius; j <= radius; j++) {
        if (round(sqrt(pow(i * cos(a), 2) + j * j)) ==
            abs(round(radius * cos(a)))) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
      cout << "\n";
    }
    usleep(100000);
  }
}
