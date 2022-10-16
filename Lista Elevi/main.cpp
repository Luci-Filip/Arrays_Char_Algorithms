/*
Listă elevi
Să se declare un tip înregistrare care să permită stocarea unei clase de elevi. Pentru fiecare elev va fi reținut
numele, prenumele și nota de la teza la informatică.
Restricții și precizări
Structura va reține următoarele informații: nume, prenume, nota
Lungimile numelui și ale prenumelui vor fi maxim 10
Nota va fi un număr rațional cuprins între 1 și 10
Structura trebuie să se numească Elev și să poată fi folosită cu succes în codul următor:
*/

#include <iostream>
#include <cstring>
using namespace std;

struct Elev {
    char nume[10], prenume[10];
    double nota;
};
int main() {
    int N;
    Elev elevi[10];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> elevi[i].nume >> elevi[i].prenume >> elevi[i].nota;
    }
    for (int i = 0; i < N; ++i) {
        cout << elevi[i].nume << " " << elevi[i].prenume << " " << elevi[i].nota << "\n";
    }
    return 0;
}
