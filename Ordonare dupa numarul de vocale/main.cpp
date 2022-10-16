/*
Ordonare după numărul de vocale
Se dă un text care conține doar cuvinte formate din litere mici și mari ale alfabetului englez și spații. Să se afișeze
cuvintele din text, ordonate crescător în funcție de numărul de vocale. În cazul în care două cuvinte au același
număr de vocale, se vor afișa în ordine lexicografică.
Date de intrare
Cuvintele citite vor fi separate prin spații și pot apărea pe mai multe linii.
Date de ieșire
Pe ecran se vor afișa cuvintele textului ordonate după criteriul din enunț, câte un cuvânt pe o linie.
Restricții
Șirul va conține maxim 1 000 de caractere
Fiecare cuvânt va conține maxim 20 caractere
Textul va conține maxim 100 de cuvinte
O linie va conține maxim 1 000 de caractere
Exemplu
Date de intrare
Ana are mere
Cosmin are portocale
Date de ieșire
Ana
Cosmin
are
are
mere
portocale
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("file.txt");

bool eVocala(char ch) {
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return true;
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    }
    return false;
}

int nrVocale(char cuvant[101]) {
    int nr = 0;
    for (int i = 0; i < strlen(cuvant); ++i) {
        if (eVocala(cuvant[i])) {
            ++nr;
        }
    }
    return nr;
}

void interschimbare(char s1[101], char s2[101]) {

    char aux[101];
    strcpy(aux, s1);
    strcpy(s1, s2);
    strcpy(s2, aux);
}

int main() {
    char sir[101][21];

    int n = 0;

    while (!fin.eof()) {
        char linie[1001];
        fin.getline(linie, 1001);
        char *cuvant = strtok(linie, " ");
        while(cuvant) {
            strcpy(sir[n], cuvant);
            n++;
            cuvant = strtok(NULL, " ");
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nrVocale(sir[i]) > nrVocale(sir[j])) {
                interschimbare(sir[i], sir[j]);
            } else if (nrVocale(sir[i]) == nrVocale(sir[j]) ) {
                if(strcmp(sir[i], sir[j]) > 0)
                    interschimbare(sir[i], sir[j]);
            }

        }
    }

    for (int i = 0; i < n; ++i) {
            cout << sir[i] << "\n";
        }
    return 0;
}
