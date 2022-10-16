/*
Intersecție
Alex și George scriu fiecare pe câte o foaie câte un șir de numere naturale, reprezentând numerele lor preferate,
iar acum vor să vadă care numere apar pe ambele foi.
Astfel, să se scrie o funcție ce primește ca și parametri 3 vectori: a, b și c și construiește în vectorul c intersecția
celor două șiruri a și b.
Semnătură funcție
Numele funcției va fi intersectie3
Funcția va avea 3 parametri de tip întreg: a[], b[] și c[]
Precizări
Dacă intersecția celor două șiruri e mulțimea vidă, vectorul c[] se va lăsa gol
Vectorii vor fi indexați de la 1, iar pe poziția 0 va fi memorat numărul de elemente pe care le conține vectorul
respectiv
Se garantează că vectorii a și b sunt sortați crescător. De asemenea, vectorul c trebuie să fie sortat crescător.
Antetul funcției este următorul:
void intersectie3(int a[], int b[], int c[])
Restricții
0 ≤ a[0], b[0] ≤ 10 000
Elementele celor doi vectori sunt numere naturale mai mici decât 1 000 000 000
Exemplu
a[] = {5, 1, 2, 2, 5, 8}; b[] = {6, 2, 2, 2, 6, 7, 8}
În urma apelului funcției intersectie3(a, b, c), vectorul c[] devine:
c[] = {3, 2, 2, 8}

*/

#include <iostream>
using namespace std;

int n, m, k;

int main() {
    int a[5001], b[5001], c[5001];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int j = 0; j < m; ++j) {
        cin >> b[j];
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            ++k;
            ++i;
        }
        else {
            c[k] = b[j];
            ++k;
            ++j;
        }
    }
    if (i <= n) {
        for (int p = j; p < m; ++p) {
            c[k] = b[p];
            ++k;
        }
    }
    for (int p = 0; p < k; ++p) {
        cout << c[p] << " ";
    }
    return 0;
}
