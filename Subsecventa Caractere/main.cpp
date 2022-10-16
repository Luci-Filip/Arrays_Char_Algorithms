/*
Subsecvență Caractere
Mark și Andrew au inventat propriul lor joc. Mark se gândește la o propoziție, iar Andrew trebuie să o ghicească.
Pentru a o ghici, el se gândește la mici secvențe care ar putea face parte din propoziția lui Mark, după care îl
întreabă daca secvența respectivă face parte din propoziție. Mark are voie să răspundă doar cu DA și NU.
Deoarece vrea să-l impresioneze pe Andrew cu noile sale abilități în programare, Mark a scris un program care
să răspundă întrebărilor lui Andrew instant. Acum trebuie să faci și tu același lucru.
Date de intrare
Programul citește de la tastatură șirul de caractere s1, reprezentând propoziția la care s-a gandit Mark, urmat de
s2, secvența la care s-a gândit Andrew.
Date de ieșire
Programul va afișa pe ecran textul DA, în cazul în care caracterele din secvența lui Andrew se găsesc pe poziții
consecutive, în aceeași ordine, în propoziția lui Mark. În caz contrar, programul va afișa mesajul NU.
Restricții și precizări
sirurile s1 și s2 vor avea cel mult 100 de caractere și vor fi formate din litere mici ale alfabetului englez și spații.
Exemplu
Date de intrare
invatam informatica
form
Date de ieșire
DA
Date intrare
ana are mere
vine
Date iesire
NU
*/

#include    <iostream>
#include    <fstream>
#include    <cstring>

using namespace std;

int main() {
    char s1[101], s2[101];
    cin.getline(s1, 101);
    cin.getline(s2, 101);
    char *p = strstr(s1, s2);
    if (p)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
