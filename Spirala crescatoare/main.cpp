/*
Spirala crescătoare
Ai învățat să folosești matricele în programele tale și ai decis să implementezi un joc simplu. În joc, ai un personaj
Max care se plimbă printr-o lume de formă dreptunghiulară, având n linii și m coloane.
El se poate deplasa din căsuța în care se află fie spre stânga, fie spre dreapta, fie în sus sau în jos. Pentru a face
lucrurile mai interesante, te-ai gândit să adaugi un grad de siguranță pentru fiecare căsuță din joc, la fel cum în
fiecare oraș există zone mai sigure și zone mai puțin sigure. Astfel, personajul tău poate acum să se deplaseze
într-o căsuță vecină doar dacă nivelul său de siguranță e mai mare decât cel al căsuței din care vine.
Ai implementat jocul, care atribuie aleator (la întâmplare) un număr întreg fiecărei căsuțe din matrice la pornirea
aplicației. Acel număr reprezintă gradul său de siguranță. Max se află în căsuța din colțul stânga sus și vrei să îl
faci să se deplaseze în spirală, pornind spre dreapta.
Afișează mesajul DA dacă e posibil ca Max să parcurgă în spirală toate elementele matricei sau NU, în caz contrar.
Date de intrare
De pe prima linie se citesc de la tastatură numerele n și m. De pe următoarele n linii se citesc m numere naturale,
reprezentând elementele matricei.
Date de ieșire
Programul va afișa DA în cazul în care Max poate parcurge în spirală toate elementele matricei, iar NU în caz
contrar.
Restricții
1 ≤ n, m ≤ 50
1 ≤ fiecare grad de siguranță ≤ 1 000 000 000
Exemplu
Date de intrare
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Date de ieșire
NU
Date de intrare
4 4
1 2 3 4
14 16 17 5
13 19 18 7
11 10 9 8
Date de iesire
DA
*/

#include <iostream>
using namespace std;

int v[2602];

int main () {
    int n, m, mt[51][51], p = 1, ok = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    int prima_linie = 1,ultima_linie = n, prima_coloana = 1, ultima_coloana = m, celule = 0;
    while (celule < n * m) {
        for (int j = prima_coloana; j <= ultima_coloana; ++j) {
            v[p++] = mt[prima_linie][j];
            ++celule;
        }
        if (celule != n * m) {
            for (int i = prima_linie + 1; i <= ultima_linie; ++i) {
                v[p++] = mt[i][ultima_coloana];
                ++celule;
            }
        }
        if (celule != n * m) {
            for (int j = ultima_coloana - 1; j >= prima_coloana; --j) {
                v[p++] = mt[ultima_linie][j];
                ++celule;
            }
        }
        if (celule != n * m) {
            for (int i = ultima_linie - 1; i >= prima_linie + 1; --i) {
                v[p++] = mt[i][prima_coloana];
                ++celule;
            }
        }
        ++prima_linie;
        ++prima_coloana;
        --ultima_linie;
        --ultima_coloana;
    }
    for (int k = 1; k <= celule; ++k) {
        if (v[k] < v[k + 1]) {
            ok++;
        }
    }
    if (ok == celule - 1) {
        cout << "DA";
    }
    else {
        cout << "NU";
    }
    return 0;
}
