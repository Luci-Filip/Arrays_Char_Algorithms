/*
Muncitori
Progresul zilnic al muncitorilor dintr-o fabrică e monitorizat de un program destul de vechi, care imprimă, în
fiecare zi, o coală lungă de hârtie cu situația pe ziua respectivă. Foaia conține o listă de forma:
Muncitorul 1 a muncit 10 ore
Muncitorul 15 a muncit 5 ore
Muncitorul 3 a muncit 3 ore
Muncitorul 23 a muncit 11 ore
Angajatul responsabil cu monitorizarea progresului adaugă fiecare astfel de foaie la dosar. Totuși, fiind o
companie mare, într-un singur an s-au strâns atât de multe dosare încât biroul său e aproape plin. Temându-se
că în curând nu vor mai avea spațiu pentru depozitarea lor, patronul firmei ți-a cerut să le creezi un program
care să salveze toate informațiile de pe foi în format digital, pentru a crea rapoarte.
Primul task pe care îl ai de făcut e să spui care a fost angajatul care a lucrat cele mai multe ore, pentru a-i
răsplăti eforturile din ultimul an la petrecerea aniversară a companiei.
Date de intrare
Pe prima linie se va găsi un singur număr natural n, iar pe următoarele n linii se vor găsi n propoziții de tipul
Muncitorul x a muncit y ore, unde x și y sunt numere naturale.
Date de ieșire
Se va afișa un singur număr natural, reprezentând numărul de ordine a muncitorului care a depus cele mai multe
ore de muncă. În cazul în care mai mulți muncitori au depus numărul maxim de ore, se va afișa cel cu indice de
ordine cel mai mic.
Restricții și precizări
În cazul în care unul dintre angajați apare de mai multe ori printre datele de intrare, orele de muncă se vor
aduna.
1 ≤ n, x, y ≤ 10 000
Exemplu
Date de intrare
5
Muncitorul 1 a muncit 10 ore
Muncitorul 23 a muncit 5 ore
Muncitorul 3 a muncit 3 ore
Muncitorul 23 a muncit 11 ore
Muncitorul 1 a muncit 2 ore
Date de ieșire
23
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, nr = 0;
    char prefix[101], sir[101];
    cin >> n;
    cin >> prefix;
    for (int i = 0; i < n; ++i) {
        ///char sir[101];
        cin >> sir;
        if (strncmp(sir, prefix, strlen(prefix)) == 0 && strlen(prefix) != strlen(sir)) {
            ++nr;
        }
    }
    cout << nr;
    return 0;
}
