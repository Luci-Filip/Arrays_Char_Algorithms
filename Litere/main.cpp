/*
Litere
Andrei trebuie să facă o compunere la limba română. Pentru a lua nota 10, trebuie să folosească cât mai multe
litere în compunerea sa. El nu vrea să piardă timp cu numărarea literelor (compunerea deja îi ia mult timp), așa
că dorește să iși facă un program în care să introducă părți de text din compunere. Programul trebuie să afișeze
numărul de litere al textului introdus.
Deoarece nu vrea să greșească la introducerea textului, Andrei va introduce maxim 256 de caractere.
Date de intrare
Programul citește de la tastatură textul, aflat pe o singură linie.
Date de ieșire
Programul afișează pe ecran numărul x, reprezentând numărul de litere din text.
Restricții și precizări
textul va avea cel mult 256 de caractere
textul va fi format doar din litere mici și mari ale alfabetului englez și spații
pentru a testa solutiile, recomandăm folosirea ideone
Exemple
Date de intrare
invAta prOGraMare de lA zero
Date de ieșire
24

*/

#include <iostream>
using namespace std;

int main() {
    char c = ' ';
    int x = 0;
    while (cin >> c) {
        ++x;
    }
    cout << x ;
    return 0;
}
/*

int main() {
    char c[10];
    int x = 0;
    while (cin >> c) {
    ++x;
    }
    cout << x;
    return 0;
}
*/
