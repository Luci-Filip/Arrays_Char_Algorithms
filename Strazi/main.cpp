/*
Străzi
Alex vrea să se mute într-un oraș cu n străzi. Fiecare stradă are m case, iar fiecare casă are un anumit preț. El vrea
să se mute pe strada care are suma prețurilor caselor cea mai mare.
Cerinţă
Ajutați-l pe Alex să determine pe ce stradă ar trebui să se mute. În cazul în care sunt mai multe străzi cu aceeași
valoare totală maximă, se va afișa prima dintre ele.
Date de intrare
Se citesc n și m, reprezentând numărul de străzi și numărul de case de pe fiecare stradă. Apoi, de pe urmatoarele n
linii se citesc câte m numere, reprezentând prețurile fiecărei case.
Date de ieșire
Pe ecran se va afișa numărul străzii cu suma valorilor caselor maximă.
Restricții și precizări
1 ≤ n ≤ 50
1 ≤ m ≤ 50
1 ≤ prețul unei case ≤ 1 000
Exemplu
Date de intrare
3 4
1 2 3 4
5 6 7 8
2 5 4 3

Date de ieșire
2
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, mt[51][51], sLine[51], smax = -1, ind;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> mt[i][j];
            sLine[i] += mt[i][j];
        }
    }
    smax = sLine[1], ind = 1;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            if (sLine[i] > smax) {
                smax = sLine[i];
                ind = i;
            }
        }
    }
    cout << ind;
    return 0;
}
