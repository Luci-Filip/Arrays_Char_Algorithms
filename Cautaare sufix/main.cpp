/*
Căutare sufixe
Se dă un șir de caractere format din litere mici ale alfabetului englez. Să se afișeze toate sufixele sale în ordine
crescătoare a lungimii.
Date de intrare
De pe prima linie se va citi șirul de caractere.
Date de ieșire
Pe ecran se vor afișa toate sufixele cuvântului, câte un sufix pe linie.
Restricții
Șirul va conține maxim 100 de caractere.
Exemplu
Date de intrare
banana
Date de ieșire
a
na
ana
nana
anana
banana
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[101];
    cin.get(s, 101);
    int n = strlen(s);
    for (int i = n; i >= 0; --i) {
        char *p = s + i;
       /// cout << s + i << " ";
        cout << p << " \n";
        ++p;
    }
    return 0;
}
