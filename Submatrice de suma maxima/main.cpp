/*
Submatrice de sumă maximă
Se dă o matrice mt cu n linii și m coloane. Să se afle submatricea de sumă maximă din matrice.
Date de intrare
De pe prima linie se citesc de la tastatură numerele n și m. De pe următoarele n linii se citesc m numere naturale
care reprezintă elementele matricei.
Date de ieșire
Programul va afișa pe ecran suma maximă a unei submatrice.
Restricții
1 ≤ n, m ≤ 50
-3 000 ≤ mt[i][j] ≤ 3 000
Exemplu
Date de intrare
4 4
-1 -1 -1 -1
-1 -1 -1 -1
-1 -1 -1 -1
-1 -1 -1 -1
Date de ieșire
-1
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, mt[51][51], sp[51][51];
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            sp[i][j] = mt[i][j] + sp[i - 1][j] + sp[i][j - 1] - sp[i - 1][j - 1];
        }
    }
    int suma_max = -3000, suma = 0;
    for (int x1 = 1; x1 <= n; ++x1) {
        for (int y1 = 1; y1 <= m; ++y1) {
            for (int x2 = x1; x2 <= n; ++x2) {
                for (int y2 = y1; y2 <= m; ++y2) {
                    suma = sp[x2][y2] - sp[x1 - 1][y2] - sp[x2][y1 - 1] + sp[x1 - 1][y1 - 1];
                    if (suma > suma_max) {
                        suma_max = suma;
                    }
                }
            }
        }
    }
    cout << suma_max << "\n";
    return 0;
}
