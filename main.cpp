#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int radius = 20;

  for (int i = -radius; i <= radius; i++) {
    for (int j = -radius; j <= radius; j++) {
      if (round(sqrt(i * i + j * j)) == radius) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << "\n";
  }
}
