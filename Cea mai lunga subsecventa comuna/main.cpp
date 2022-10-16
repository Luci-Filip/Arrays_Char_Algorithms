/*
Cea mai lungă subsecvență comună
Marcel și Marius au de dat un test la literatură și vor să colaboreze pentru a crea o compunere cât mai complexă.
Totuși, această practică nu e agreată de profesoara lor, care de fiecare dată când găsește 2 lucrări similare le
verifică atent, să nu conțină secvențe prea lungi de text care coincid.
După ce a învățat programare, Marcel a descoperit că poate introduce compunerea lui și a lui Marius într-un
program pe calculator, iar acel program îi va spune care e cel mai lung șir de caractere care se găsește ca
subsecvență în ambele compuneri. O subsecvență a unui șir s e un șir de caractere care apar pe poziții
consecutive în s.
Marcel a scris repede programul său, iar acum se simte pregătit pentru următorul test. Poți să scrii un program
care rezolvă problema la fel de repede?
Date de intrare
Programul citește de la tastatură, de pe prima linie, șirul de caractere s1, reprezentând compunerea lui Marcel. De
pe a doua linie se va citi șirul s2, reprezentând compunerea lui Marius.
Date de ieșire
Programul va afișa pe ecran un șir de caractere care apare ca subsecvență în ambele compuneri și are lungime
maximă. Dacă sunt mai multe astfel de șiruri, se va afișa cel care începe pe poziția cea mai din stânga din primul
șir.
Restricții și precizări
sirurile s1 și s2 vor avea cel mult 1000 de caractere și vor fi formate din litere ale alfabetului englez și spații.
Caracterele din secvența comună găsită trebuie să coincidă cu exactitate (c != C)
Exemplu

Date de intrare
Tema poemului citat o reprezinta conditia omului de geniu
Conditia omului de geniu este redata in poemul citat

Date de ieșire
onditia omului de geniu
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[500], s2[500];
    cin.getline(s1, 500);
    cin.getline(s2, 500);
    char *p = strstr(s1, s2);
    while (p != 0) {
        cout << s2 << " " << p - s1 << "\n";
        p = strstr(p + 1, s2);
    }

    return 0;
}
