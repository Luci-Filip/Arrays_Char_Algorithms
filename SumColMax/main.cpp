/*
SumColMax
Cerință
Dorel, agricultor și șef, are un teren agricol de n x m km pe care cultivă periodic grâu. Acum e sezonul recoltei, iar
pe fiecare km de teren se găsește o cantitate (cunoscută) de grâu.
Ferma lui Dorel are m angajați, pe care îi imparte astfel încât fiecare adună grâul de pe o singură coloană.
Cantitatea pe care o adună un muncitor este suma valorilor elementelor situate pe coloana unde este amplasat
el.
Se dă o matrice formată din n linii și m coloane, reprezentând schema terenului agricol. Să se afișeze cantitățile de
grâu din fiecare km ce sunt adunate de muncitorul cel mai harnic. Cel mai harnic muncitor este cel care a
adunat cea mai mare cantitate de grâu.
Date de intrare
Pe prima linie se citesc 2 numere naturale, n și m, separate printr-un spațiu. Pe următoarele n linii se află câte m
numere întregi separate prin câte un spațiu, elementele matricei reprezentând terenul agricol.
Date de ieșire
Se vor afișa n numere separate prin câte un spațiu, reprezentând elementele coloanei de unde adună muncitorul
cel mai harnic. Aceste numere vor fi afișate în ordinea citirii.
Restricții
1 ≤ n, m ≤ 1 000
Elementele matricei vor fi numere întregi mai mari decât -1 000 și mai mici decât 1 000
Dacă există mai mulți muncitori care aduna cantitatea maximă, se va considera doar cel cu indicele
coloanei cel mai mic
Paradoxal, cantitatea de grâu pe care o adună un muncitor poate fi un număr negativ
Exemplu
Date de intrare
4 5
2 4 2 6 7
1 3 1 2 5
5 3 2 5 6
4 4 5 2 1

Date de ieșire
7 5 6 1
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, mt[101][101], sum_col[101], smax = -1000, ind;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> mt[i][j];
            sum_col[j] += mt[i][j];
        }
    }
    smax = sum_col[1], ind = 1;
    for (i = 1; i <= n; ++i) {
        for (j = 2; j <= m; ++j) {
            if (sum_col[j] > smax) {
                smax = sum_col[j];
                ind = j;
            }
        }
        cout << mt[i][ind] << " ";
    }
    return 0;
}
