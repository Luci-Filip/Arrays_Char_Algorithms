/*
Căutare prefix

Ai învățat programare și ți-ai dat seama că te pricepi să le explici colegilor tăi mai mici tot felul de noțiuni din
informatică, pe limba lor. De fiecare dată când cineva se plânge că o noțiune e "prea abstractă", îi vii în ajutor cu
un exemplu concret.
Astăzi, fratele tău mai mic a venit de la facultate trist și ai aflat că toată ziua s-a chinuit să înțeleagă expresiile
regulare. Ba mai mult, el susține că la finalul laboratorului li s-a dat să scrie un program care primește un șir de
caractere (îl vom nota sir) și un șir de n cuvinte și afișează numărul de cuvinte care se potrivesc cu expresia
regulară sir.+. De exemplu, dacă sir are valoarea "ana", cuvintele trebuie să se potrivească cu expresia regulară
ana.+.
Te-ai hotărât să îl ajuți și ai început să citești despre expresiile regulare ca să înțelegi cerința problemei. Expresia
dată e de tip POSIX extended, găsești aici mai multe despre cum funcționează.
Scrie un program care rezolvă problema de mai sus, pentru a înțelege mai bine expresiile regulare și a putea să îi
răspunzi fratelui tău la întrebări.
Date de intrare
Programul va citi de pe prima linie numărul natural n, reprezentând numărul de cuvinte din listă, de pe linia
următoare șirul de caractere care reprezintă începutul expresiei regulare, conform cerinței de mai sus, iar de pe
următoarele n linii câte un singur cuvânt format doar din litere mici ale alfabetului englez.
Date de ieșire
Pe ecran se va afișa numărul de cuvinte care se potrivesc cu expresia regulară construită cu primul șir de
caractere citit, conform cerinței.
Restricții și precizări
1 ≤ n ≤ 50.
fiecare cuvânt va conține maxim 100 de caractere.
toate liniile citite, în afară de prima, sunt formate din litere mici ale alfabetului englez.
Exemplu
Date de intrare
5
pre
preadmitere
eprezicere
pre
prezentare
practica

Date de ieșire
2
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
