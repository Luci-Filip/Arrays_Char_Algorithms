/*
Adăugare caractere
Să se scrie o funcție numită addChars care primește ca parametru un șir de caractere și inserează după fiecare
vocală caracterul $.
Semnătură funcție
Funcția trebuie să se numească addChars.
Funcția trebuie să primească ca parametru un șir de caractere.
La finalul funcției, șirul de caractere trebuie să conțină textul inițial modificat astfel încât după fiecare vocală
să apară caracterul $.
Funcția nu va returna și nu va afișa nimic. Rezultatul va fi returnat prin parametrul transmis.
Restricții
Șirul final, după inserarea caracterelor cerute, va conține maxim 200 de caractere.
Exemplu
char s[200];
s[0] = 'a';
s[1] = 'n';
s[2] = 'a';
s[3] = 0;
addChars(s);
cout << s; // se va afisa a$na$
*/

#include <iostream>
#include <cstring>

using namespace std;

bool eVocala(char ch) {
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        return true;
    return false;
}
void addChars(char s[202]) {
        int l = 0;
    while (s[l]) {
        ++l;
    }
    for (int i = 0; s[i]; ++i) {
        if (eVocala(s[i])) {
            for (int j = l + 1; j > i; --j) {
                s[j] = s[j - 1];
            }
            s[i + 1] = '$';
            l++;
        }
    }
}
int main() {
    char s[201];
    cin.getline(s, 201);
    addChars(s);
    cout << s;
    return 0;
}
