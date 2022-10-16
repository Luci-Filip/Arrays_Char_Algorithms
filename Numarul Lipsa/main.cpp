/*
Numărul lipsă  390
Cerință
Această problemă este una dintre cele mai clasice probleme de informatică și logică matematica, care se
regăsește și în multe întrebări de interviu: ți se dau n - 1 numere distincte cu valori între 1 și n. Identifică numărul
din intervalul [1, n] care nu se găsește printre valorile citite.
Date de intrare
Pe prima linie se află numărul natural n. Pe a doua linie se găsesc n - 1 numere naturale cuprinse între 1 și n.
Date de ieșire
Se afișează numărul lipsă din intervalul dat.
Restricții
1 ≤ n ≤ 1 000 000
Încearcă să rezolvi problema fără să folosești șiruri
Exemplu
Date de intrare
5
2 5 1 4
Date de ieșire
3
*/

#include <iostream>
using namespace std;

int main() {
    int n, x, interval_1 = 0, interval_2 = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        interval_1 += i;
    }
    for (int j = 1; j <= n - 1; ++j) {
        cin >> x;
        interval_2 += x;
    }
    cout << interval_1 - interval_2;
    return 0;
}
