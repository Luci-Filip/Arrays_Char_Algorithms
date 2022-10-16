/*
Zone
Se dă un număr natural n. Să se genereze o matrice cu n linii și n coloane, în care pe diagonala principală și cea
secundară este 0 și apoi se codifică cu 1, 2, 3, 4 cele 4 zone formate de cele 2 diagonale, ca în exemplu.
Date de intrare
Se citește la tastatură numărul natural n.
Date de ieșire
Programul va afișa matricia cerută formată din n linii și n coloane. Intre numerele de pe o linie va exista un spatiu.
Restricții
1 ≤ n ≤ 50
Exemplu
Date de intrare
5
Date de ieșire
0 1 1 1 0
4 0 1 0 2
4 4 0 2 2
4 0 3 0 2
0 3 3 3 0
*/

#include <iostream>
using namespace std;

int main() {
    int n, mt[50][50];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i > j && i + j < n + 1) {
                mt[i][j] = 4;
            }
            else if (i < j && i + j < n + 1) {
                mt[i][j] = 1;
            }
            else if (j > i && i + j > n + 1) {
                mt[i][j] = 2;
            }
            else if (i > j && i + j > n + 1) {
                mt[i][j] = 3;
            }
            else  {
                mt[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
