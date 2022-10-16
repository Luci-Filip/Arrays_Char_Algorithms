/*
Mutare zone
Se dă o matrice pătratică de dimensiune n. Aceasta este împărțită în patru sectoare de către diagonala
principală și cea secundară. Să se efectueze o permutare circulară a sectoarelor, în sensul acelor de ceasornic.
Date de intrare
Pe prima linie se află numărul n. Pe următoarele n linii se află câte n numere separate prin câte un spațiu,
reprezentând elementele matricei.
Date de ieșire
Programul va afișa matricea după efectuarea permutării.
Restricții
1 ≤ n ≤ 50
1 ≤ m[i][j] ≤ 100
Exemple
Date de intrare
5
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55

Date de ieșire
1 41 31 21 15
52 22 32 24 12
53 43 33 23 13
54 42 34 44 14
51 45 35 25 55
*/

#include <iostream>
using namespace std;

int aux[51][51];
int main(){
    int n, mt[51][51];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> mt[i][j];
            if ((i < j && i + j < n + 1) || (i > j && i + j < n + 1) || (i < j && i +  j > n + 1) || (i > j && i + j > n + 1)) {
            aux[j][n + 1 - i] = mt[i][j];
            }
            else {
                aux[i][j] = mt[i][j];
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << aux[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
