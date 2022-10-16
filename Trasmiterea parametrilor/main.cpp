#include <iostream>
using namespace std;

// Functia va primi 2 cifre si va returna numarul format prin alaturarea lor
int concatenare(int a, int b) {
  return a * 10 + b;
}

int main() {
  int a = 3, b = 2;
  cout<<concatenare(b, a); // se va afisa 23
}
