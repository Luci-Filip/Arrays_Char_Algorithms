/*
Minim și Maxim
Să se scrie o funcție numită minMax care primește un număr n, un șir v care poate avea maxim 100 de elemente și
două numere întregi transmise prin referință. Funcția va returna prin cei doi parametri transmiși prin referință cea
mai mica și cea mai mare valoare din șir.
Semnătură funcție
Funcția trebuie să se numească minMax.
Funcția trebuie să primească un parametru întreg, un șir de numere cu maxim 100 de elemente și doi
parametri transmiși prin referință tot întregi. Parametrii trebuie să respecte această ordine. Elementele
vectorului vor fi salvate pe poziții care încep de la 0.
La finalul funcției primul parametru transmis prin referință trebuie să stocheze valoarea minimă din șir, iar al
doilea valoarea maximă.
Funcția nu va returna și nu va afișa nimic. Rezultatul va fi returnat prin parametrii transmiși prin referință.
Restricții
1 ≤ n ≤ 100
-100 ≤ v[i] ≤ 100
Exemplu
int n = 3, v[100];
v[0] = 4;
v[1] = 3;
v[2] = 1;
int minim, maxim;
minMax(n, v, minim, maxim);
// acum minim va fi 1, iar maxim 4
*/

#include <iostream>
using namespace std;

void minMax(int n, int v[101], int &minim, int &maxim) {
    minim = 100;
    maxim = -100;
    for (int i = 0; i < n; ++i) {
        if (v[i] <= minim) {
            minim = v[i];
        }
        if (v[i] >=  maxim) {
            maxim = v[i];
        }
    }
}
int main() {
    int n, v[101], minim, maxim;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    minMax(n, v, minim, maxim);
    cout << minim << " " << maxim;
    return 0;
}
