/*
Inserare linie în matrice
Să se scrie o funcție numită inserareMedie care primește un număr n, un număr m, o matrice mt care poate avea
maxim 51 de linii și maxim 51 de coloane și un număr k. Funcția va insera pe poziția k o nouă linie în matrice,
având pe fiecare coloană un număr rațional egal cu media aritmetică a elementelor de pe acea coloană.
Parametrii n și m vor fi transmiși prin referință.
Semnătură funcție
Funcția trebuie să se numească inserareMedie.
Funcția trebuie să primească doi parametri numere întregi transmiși prin referință, o matrice cu numere
raționale și un număr întreg. Parametrii trebuie să fie în această ordine.
La finalul funcției matricea trebuie să conțină o linie în plus conform enunțului
Funcția nu va returna nimic
Restricții și precizări
1 ≤ n, m ≤ 50
0 ≤ k ≤ n
-100 ≤ mt[i][j] ≤ 100
Liniile și coloanele matricei sunt numerotate începând cu 0
Exemplu
int n = 2, m = 2;
double mt[51][51]={{1,1}, {2,2}};
inserareMedie(n, m, mt, 1);
// mt va fi
// 1 1
// 1.5 1.5
// 2 2
// n va fi 3, m va fi 2

*/

#include <iostream>
using namespace std;

int i, j;
void inserareMedie(int &n, int &m, double mt[51][51], int k) {
    double sum = 0;
    for (int j = 0; j < m; ++j) {
        sum = 0;
        for (int i = 0; i < n; ++i) {
        sum += mt[i][j];
        }
    mt[n][j] = sum / n;
    }
    for (int j = 0; j < m; ++j) {
        sum = mt[n][j];
        for (int i = n; i >= k + 1; --i) {
            mt[i][j] = mt[i - 1][j];
        }
        mt[k][j] = sum;
    }
    ++n;
}
void afisare(int n, int m, double mt[51][51]) {
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n = 2, m = 2;
    double mt[51][51] = {{1,1},{2,2}};
    inserareMedie(n, m, mt, 1);
    cout << n << " " << m;
    return 0;
}
