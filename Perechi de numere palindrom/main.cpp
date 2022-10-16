/*
Perechi de numere palindrom
Să se scrie o funcție care află numărul de numere palindrom dintr-un interval [a, b] dat. Un număr este
palindrom dacă este egal cu inversul său.
Se vor scrie funcții pentru
Nume
functie Semnătură Ce returnează
calculul răsturnatului unui număr inv int inv(int) răsturnatul numărului dat ca
parametru
verificarea dacă un număr este
palindrom
ePalindrom int
ePalindrom(int)
valoarea 1 dacă numărul dat este
palindrom, 0 în caz contrar
aflarea numărului de numere palindrom
din intervalul [a, b]
nrPal int nrPal(int,
int)
numărul de numere palindrom din
intervalul [a, b]
Atenție!
Trimite doar definiția funcțiilor cerute.
Restricții
1 ≤ a, b ≤ 100 000
Exemplu
cout << nrPal(7, 11); // va afisa 4 (7, 8, 9 si 11 sunt numere palindrom)
*/

#include <iostream>
using namespace std;

int inv(int n) {
    int invers_n = 0;
    while (n != 0) {
    invers_n = invers_n * 10 + n % 10;
    n /= 10;
    }
    return invers_n;
}
int ePalindrom(int n) {
    if (inv(n) == n) {
        return 1;
    }
    return 0;
}
int nrPal(int a, int b) {
    int contor = 0;
    for (int i = a; i <= b; ++i) {
        if (ePalindrom(i) == 1) {
            ++contor;
        }
    }
    return contor;
}
int main() {
  int n,a, b, innversn, contor;
    cin >> a >> b;
  cout << "inversul este > " << inv(n) << "\n";
  cout << ePalindrom(inv(n)) << "\n";
  cout << nrPal(a,b);
  return 0;
}
