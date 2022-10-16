/*
Diagonală de sumă maximă
Se dă o matrice m cu n linii și n coloane. Să se afișeze suma maximă a elementelor situate pe o paralelă la
diagonala principală sau secundară.
Date de intrare
De pe prima linie se citește numărul n. De pe următoarele n linii se citesc n numere întregi, reprezentând
elementele matricei.
Date de ieșire
Programul va afișa pe ecran suma cerută.
Restricții și precizări
1 ≤ n ≤ 50
-100 ≤ m[i][j] ≤ 100
Diagonalele principale și secundare se consideră și ele paralele
Exemplu
Date de intrare
4
1 2 30 4
5 6 7 8
9 10 11 12
13 14 15 16
Date de ieșire
45
*/
#include <iostream>
using namespace std;

int main() {
    int n, i, j, m[101][101], k, sum_1, sum_2, sum_3, sum_4, smax_1 = -100, smax_2 = -100, smax_3 = -100, smax_4 = -100;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            cin >> m[i][j];
        }
    }
    for (k = 1; k <= n; ++k) {
        sum_1 = 0;
        i = k;
        j = 1;
        while (i >= 1) {
            cout << m[i][j] << " ";
            sum_1 += m[i][j];
            --i;
            ++j;
        }
        if (sum_1 > smax_1) {
                smax_1 = sum_1;
            }
    }
    for (k = 2; k <= n; ++k) {
        sum_2 = 0;
        i = n;
        j = k;
        while (j <= n) {
            cout << m[i][j] << " ";
            sum_2 = sum_2 + m[i][j];
            --i;
            ++j;
        }
        if (sum_2 >= smax_2) {
                smax_2 = sum_2;
            }
    }
    for (k = 1; k <= n; ++k) {
        sum_3 = 0;
        i = 1;
        j = k;
        while (i <= n && j <= n) {
                cout << m[i][j] << " ";
            sum_3 += m[i][j];
            ++i;
            ++j;
        }
         if (sum_3 >= smax_3) {
                smax_3 = sum_3;
            }
    }
    for (k = 2; k <= n; ++k) {
        sum_4 = 0;
        i = k;
        j = 1;
        while (i <= n && j <= n) {
                cout << m[i][j] << " ";
            sum_4 += m[i][j];
            ++i;
            ++j;
        }
        if (sum_4 >= smax_4) {
                smax_4 = sum_4;
            }
    }
    if (smax_1 >= smax_2) {
        smax_2 = smax_1;
    }
    if (smax_3 >= smax_4) {
        smax_4 = smax_3;
    }
    if (smax_2 >= smax_4) {
        smax_4 = smax_2;
    }
    cout << smax_4;
    return 0;
}

