/*
Șerpuire
Se dă o matrice pătratică m cu n linii și n coloane. Să se afișeze elementele de pe linia șerpuită care trece prin
paralelele la diagonala secundară, inclusiv prin aceasta.
Date de intrare
De pe prima linie se citește numărul natural n. De pe următoarele n linii se citesc câte n numere naturale, separate
prin câte un spațiu, reprezentând elementele matricei.
Date de ieșire
Programul va afișa elementele de pe linia șerpuită pe un singur rând, separate prin câte un spațiu.
Restricții
1 ≤ n ≤ 50
1 ≤ m[i][j] ≤ 100
liniile și coloanele sunt numerotate de la 1 la n
Exemple
Date de intrare
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Date de ieșire
1 2 5 9 6 3 4 7 10 13 14 11 8 12 15 16

*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, m[51][51];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            cin >> m[i][j];
        }
    }
    i = 0;
    for (k = 1; k <= 2 * n - 1; ++k) {
        if (k > n) {
            ++i;
        }
        if (k % 2 == 1)
            for (j = k - i; j > i; --j) {
            cout << m[j][k + 1 - j] << " ";
        } else {
           for (j = i + 1; j <= k - i; ++j)
            cout << m[j][k + 1 - j] << " ";
        }
    }
    return 0;
}
