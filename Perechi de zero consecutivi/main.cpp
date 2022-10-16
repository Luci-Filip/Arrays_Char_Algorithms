/*
0 - Consecutivi
Alex este programator la o firmă de software din orașul lui, dar încă învață să programeze, așa că deocamdată
nu se descurcă excelent. Pentru a nu se face de rușine în fața șefului, vă pune pe voi să rezolvați problemele pe
care le primește. De data aceasta, trebuie să scrie o funcție ce primește un număr natural n ca și parametru și
returnează numărul maxim de cifre 0 aflate pe poziții consecutive în număr.
Semnătură funcție
Numele funcției este maxCons0
Funcția are un singur parametru de tip long long: n
Funcția returnează un număr întreg (de tip int), reprezentând numărul maxim de cifre 0 aflate pe poziții
consecutive în număr
Precizări
Soluția va conține doar definiția funcției.
Restricții
1 ≤ n ≤ 10
Exemplu
Funcția maxCons0(1080035) va returna valoarea 2
*/

#include <iostream>
using namespace std;

int zeroCons(int N, int v[1000000]) {
    int nr = 0, nrMax = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i] == 0) {
            ++nr;
            if (nr > nrMax) {
                nrMax = nr;
            }
        }
        else {
            nr = 0;
        }
    }
    return nrMax;
}
int main() {
    int N, v[100000];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    cout << "Segventa de numaere consecutive este:" << zeroCons(N, v);
    return 0;
}
