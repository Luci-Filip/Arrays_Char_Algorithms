/*
Căutare sufix

Ai rezolvat problema anterioară rapid și i-ai explicat fratelui tău expresiile regulare. După ce a înțeles că expresia
POSIX ana.+ se potrivește de fapt cu toate cuvintele care îl conțin pe ana ca și prefix și mai conțin cel puțin un
caracter în plus, i-ai dat o problemă pe care să o rezolve singur.
Se dă un număr n, un cuvânt sir și o listă de n cuvinte. Să se afle câte dintre cuvinte se potrivesc cu expresia
regulară .+sir (înlocuind sir cu valoarea citită de la tastatură).
Date de intrare
De pe prima linie se va citi numărul n. Următoarele n + 1 linii conțin fiecare câte un cuvânt format din litere mici
ale alfabetului englez.
Date de ieșire
Pe ecran se va afișa numărul de cuvinte care se potrivesc cu expresia regulară formată cu șirul citit, conform
cerinței.
Restricții
1 ≤ n ≤ 50
cuvintele vor conține maxim 100 caractere fiecare.
Exemplu
Date de intrare
5
are
programare
imbunatatire
prezentare
are
intrebaree

Date de ieșire
2
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, nr = 0, lung_sufix = 0, lung_cuvant = 0;
    char sir[101], sufix[101], cuvinte[101];
    cin >> n;
    cin.get(); /// mananca spatiul alb

    cin.getline(sufix, 101);
    lung_sufix = strlen(sufix);

    ///cout << "Primul cuvant: " << sufix << " | " << lung_sufix;
    for (int i = 0; i < n; ++i) {
        cin.getline(cuvinte, 101);
        lung_cuvant = strlen(cuvinte);

        char sufix_curent[101];
        strcpy(sufix_curent, cuvinte + (lung_cuvant - lung_sufix));

        if (strcmp(sufix, sufix_curent) == 0 && lung_sufix != lung_cuvant) {
            ///cout << "Cuvant: " << cuvinte << " | Sufix: " << sufix_curent << "\n";
            ++nr;
        }
    }
    cout << nr;

    return 0;
}
