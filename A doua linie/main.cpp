/*
A doua linie

Fiind dat un text aflat pe mai multe linii, să se afișeze a doua linie din text.
În cazul în care textul nu conține minim 2 linii se va afișa text prea scurt.
Date de intrare
Un text aflat pe mai multe linii.
Date de ieșire
Pe ecran se va afișa a doua linie din text.
Restricții
Textul va conține maxim 20 de linii, iar fiecare linie conține maxim 100 caractere.
Atunci când textul conține minim 2 linii, fiecare linie va conține minim 1 caracter diferit de spațiu.
Exemplu
Date de intrare

ana invata sa programeze
ea crede ca programarea nu e grea
daca rezolvi suficiente probleme
si esti harnic

Date de ieșire
ea crede ca programarea nu e grea
*/
#include    <iostream>
#include    <cstring>
#include    <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    int linie = 0;
    char text[21][101];
    char propozitie[101];
    while (!fin.eof()) {
        fin.getline(propozitie, 101);
        if(strlen(propozitie) > 0) {
            strcpy(text[linie], propozitie);
            ++linie;
        }
    }
    if (linie < 2)
        cout << "text prea scurt";
    else
        cout << text[1];
    return 0;
}
