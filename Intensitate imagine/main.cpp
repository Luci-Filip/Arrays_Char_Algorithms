/*
Intensitate imagine
Poveste
Tocmai ai fost angajat în departamentul de procesare de imagini al unei mari companii. Pentru a te acomoda cu
noul loc de muncă, ai primit un task simplu: Vei primi o imagine alb-negru și trebuie să afli pentru diverse zone din
imagine care este intensitatea totală de alb din acea zonă.
Imaginea pe care o primești are forma unei matrice mt cu n linii și m coloane. Fiecare element i, j al matricei
reprezintă intensitatea pixelului aflat pe linia i și coloana j din imagine.
Managerul tău îți dă g zone din imagine, iar tu trebuie să îi spui pentru fiecare dintre cele g zone, care este
intensitatea totală a zonei. Intensitatea totală a unei zone este suma totală a intensităților fiecărui pixel din zonă.
O zonă din imagine este definită prin numerele i1, j1, i2, j2. Zona este de fapt submatricea cu colțul din stângasus (i1, j1) și dreapta-jos (i2, j2).
Cerință
Dându-se imaginea și cele g zone, să se afle pentru fiecare zonă intensitatea totală.
Date de intrare
De pe prima linie se citesc de la tastatură numerele n și m. De pe următoarele n linii, se citesc m numere naturale
care reprezintă intensitatea fiecărui pixel.
De pe următoarea linie se va citi numărul g, reprezentând numărul de zone din imagine pentru care trebuie să afli
intensitatea totală.
Pe fiecare dintre următoarele g linii se vor afla câte 4 numere i1, j1, i2, j2, reprezentând coordonatele submatricei.
Date de ieșire
Programul va afișa pe ecran g linii, reprezentând intensitatea totală a fiecărei zone.
Restricții
1 ≤ n, m ≤ 100
-3 000 ≤ mt[i][j] ≤ 3 000
1 ≤ g ≤ 100
1 ≤ i1 ≤ i2 ≤ n
1 ≤ j1 ≤ j2 ≤ m
Exemplu
Date de intrare
4 5
-1 -1 -4 -4 -1
-1 -1 -5 -5 -1
-1 -1 -1 -9 -1
-1 -6 -7 -8 -1
3
1 1 4 5
3 4 3 4
2 2 3 4

Date de ieșire
-60
-9
-22
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, g, i, j, mt[101][101];
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    cin >> g;
    int k, sum, i1, j1, i2, j2;
    for (k = 1; k <= g; ++k) {
         cin >> i1 >> j1 >> i2 >> j2;
         sum = 0;
        for (i = i1; i <= i2; ++i) {
            for (j = j1; j <= j2; ++j) {
                sum = sum + mt[i][j];
            }
        }
        cout << sum  << "\n";
    }
    return 0;
}
