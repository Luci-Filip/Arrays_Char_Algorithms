/*
Liste de șiruri de caractere
Atunci când lucrăm cu șiruri de caractere este posibil să avem nevoie să memorăm mai multe șiruri.
Să presupunem că avem o listă cu n elevi și vrem să îi afișăm ordonați alfabetic în funcție de nume.
Pentru a face acest lucru, vom folosi o matrice de tip char, fiecare linie fiind practic un șir de caractere deci putem
apela funcțiile din lecțiile anterioare folosind linii ale matricei
*/

#include    <iostream>
#include    <string>
using namespace std;

void interschimbare(char s1[100], char s2[100]) {
  // muta sirul s1 in s2 si invers
  char aux[100];
  strcpy(aux, s1);
  strcpy(s1, s2);
  strcpy(s2, aux);
}

int main() {
  char siruri[100][100];
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> siruri[i];
  }
  for(int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (strcmp(siruri[i], siruri[j]) > 0) {
        interschimbare(siruri[i], siruri[j]);
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << siruri[i] << "\n";
  }
    return 0;
}
