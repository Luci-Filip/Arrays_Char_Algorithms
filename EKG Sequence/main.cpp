/*
EKG Sequence
O secvență de numere întregi poate fi reprezentată grafic foarte ușor, dacă adăugăm pe grafic toate punctele
de coordonate (i, a ). În acest caz, i reprezintă o poziție a unui element din secvență, iar a reprezintă elementul
de pe poziția i din secvență.
De exemplu, putem reprezenta grafic secvența (1, 4, 3, 4) în felul următor:
În această problemă vei folosi o secvență de numere întregi descoperită în anul 2001 și numită Secvența EKG,
datorită asemănării graficului ei cu o electrocardiogramă. Poți citi aici mai multe despre ea.
Secvența EKG e definită în felul următor:
a[1] = 1
a[2] = 2
a[n] = cel mai mic număr x care nu apare pe pozițiile anterioare în secvență, iar cmmdc(x, a[n - 1]) != 1, unde
cmmdc(a, b) e cel mai mare divizor comun al lui a și b
Astfel, secvența începe cu 1, 2, 4, 6, 3, 9, 12, 8, 10, 5, 15...
Cerință
Află elementul de pe poziția n din secvența EKG.
Date de intrare
Pe prima linie se află un singur număr natural, n.
Date de ieșire
Se va afișa un singur număr natural, reprezentând elementul de pe poziția n din secvența EKG.
Restricții
1 ≤ n ≤ 1 000
Exemplu
Date de intrare
10
Date de ieșire
5
*/

#include <iostream>
using namespace std;

int v[1001];

int cmmdc (int a, int b) {
    while (b) {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}
bool verification (int n, int limitation) {
    for (int i = 1; i <= limitation; ++i)
        if (n == v[i])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    v[1] = 1;
    v[2] = 2;
    int elCrt = 3;
    while(elCrt <= n) {
        int candidate = 1;
        bool Ok = cmmdc(candidate, v[elCrt - 1]) != 1 && verification(candidate, elCrt);
        while(Ok == false) {
            candidate += 1;
            Ok = cmmdc(candidate, v[elCrt - 1]) != 1 && verification(candidate, elCrt);
        }
        v[elCrt] = candidate;
        elCrt += 1;
    }
    cout << v[n];
    return 0;
}
