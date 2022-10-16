/*
Lungimea medie a cuvintelor
Fiind dat un șir de caractere care se află pe prima linie, să se afle lungimea medie a cuvintelor.
Date de intrare
De pe prima linie se va citi șirul.
Date de ieșire
Pe ecran se va afișa lungimea medie a cuvintelor din text. Numărul va fi afișat cu 2 zecimale.
Restricții și precizări
Șirul va conține maxim 100 de caractere.
Șirul va conține litere mari și mici precum și semne de punctuație
Un cuvânt este definit ca una sau mai multe litere aflate pe poziții consecutive
În cazul în care șirul nu conține cuvinte, lungimea medie este 0
Exemplu
Date de intrare
ana are mere
Date de ieșire
3,33
*/

include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    char s[101];
    char lista[101][101];
    int poz = 0;
    cin.getline(s, 100);
    char *word;
    word = strtok(s,"., ;:'?!-");
    while (word != NULL) {
        strcpy(lista[poz++],word);
        word = strtok(NULL, "., ;:?!-");
    }
    double nr_cuv = poz;
    double suma = 0;
    for (int i = 0; i < poz; ++i)
        suma += strlen(lista[i]);
    if (!nr_cuv) {
        cout << fixed << setprecision(2) << suma;
    }

    else
    cout << fixed << setprecision(2) << suma / nr_cuv;

  return 0;
}
