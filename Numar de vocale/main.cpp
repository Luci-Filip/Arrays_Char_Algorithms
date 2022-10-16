/*
Număr de vocale
Fiind dat un șir de caractere care se află pe prima linie, să se afle numărul de vocale din șir.
Date de intrare
De pe prima linie se va citi șirul
Date de ieșire
Pe ecran se va afișa numărul de vocale din șir
Restricții
Șirul va conține maxim 100 de caractere
y și w nu se consideră ca fiind vocale
Exemplu
Date de intrare
ana are mere
Date de ieșire
6
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[100];
    cin .getline(c, 100);
    int n = strlen(c);
    int vocalNumber = 0;
    char vowel[] = "aeiouAEIOU";
    int i = 0;
    while (c[i] != 0) {
        if (strchr(vowel,c[i])){
            ++vocalNumber;
        }
        ++i;
    }
    cout << vocalNumber;

    return 0;
}
