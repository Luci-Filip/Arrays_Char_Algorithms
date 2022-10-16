/*
4 zone

Cerință
Se dă o matrice pătratică. Vom defini 4 zone astfel:
zona 1: elementele situate strict deasupra diagonalei principale și strict deasupra diagonalei secundare
zona 2: elementele situate strict sub diagonala principală și strict deasupra diagonalei secundare
zona 3: elementele situate strict sub diagonala principală și strict sub diagonala secundară
zona 4: elementele situate strict deasupra diagonalei principale și strict sub diagonala secundară
Se cere afișarea elementelor pe zone ( mai întâi elementele din zona 1, apoi cele din zona 2 , ș.a.m.d.).
Date de intrare
Pe prima linie se va citi n, numarul liniilor și a coloanelor matricei. Pe următoarele n linii se vor citi câte n numere
naturale, reprezentând elementele matricei.
Date de ieșire
Se vor afișa 4 linii, linia i reprezentând elementele zonei i ( 1 ≤ i ≤ 4 ). Elementele vor fi afișate în ordinea citirii.
Restricții
Elementele de pe diagonalele principală și secundară nu aparțin de nicio zonă
Elementele matricei sunt numere naturale mai mici decât 10 000
3 ≤ n ≤ 100
Exemplu
Date de intrare
4
1 2 3 4
2 5 4 1
4 3 6 2
3 4 4 3

Date de ieșire
2 3
2 4
4 4
1 2

*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, mt[101][101], aux[101][101];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            cin >> mt[i][j];
        }
    }
    for (i = 1; i <= n && i < j; ++i) {
        for (j = 1; j <= n; ++j) {
            if (i < j && i + j < n + 1) {
                aux[i][j] = mt[i][j];
            }
            else if (i > j && i + j < n + 1) {
                aux[i][j] = mt[i][j];
            }
            else if (i > j && i + j > n +1) {
                aux[i][j] = mt[i][j];
            }
            else if (i < j && i + j > n +1) {
                aux[i][j] = mt[i][j];
            }
            cout << aux[i][j];
        }
        cout << "\n";
    }
    return 0;
}
