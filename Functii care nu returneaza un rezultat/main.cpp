#include <iostream>
using namespace std;

// Functia urmatoare verifica daca toate cifrele numarului dat sunt pare
void toatePare(int n) {
  while (n > 0) {
    if (n % 2 != 0) {  //numarul nu se divide cu 2 deci ultima cifra e impara
      cout<<"Numarul dat nu are toate cifrele pare";
      return;  // intrerupem executia functiei
    }
    n /= 10;
  }
  // Daca executia programului a ajuns aici, inseamna ca la fiecare pas
  // n era divizibil cu 2, deci avea ultima cifra para
  cout<<"Numarul dat are toate cifrele pare";
}
