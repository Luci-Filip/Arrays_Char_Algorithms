/*
Modificarea stringurilor
Înainte de a modifica un string, trebuie să știm cum să-l parcurgem. Funcția .size() ne spune care este lungimea
lui. Astfel, dacă avem un string s, în loc să-l afișăm folosind cout << s, putem să îl afișăm și în felul următor:
for (int i = 0; i < s.size(); ++i) {
 cout << s[i];
}
Practic accesarea elementelor se face la fel ca și în cazul șirurilor, iar pozițiile încep de la 0.
Modificarea unui element
Modificarea unui element a cărui poziție o știm deja se face ca și în cazul șirurilor. Astfel, dacă vrem să modificăm
elementul de pe poziția i din s, trebuie doar să îl reinițializăm pe s[i]. Pentru aceasta, poziția i trebuie să existe,
adică i să fie cuprins între 0 și s.size() - 1 (la fel ca și în cazul șirurilor de numere).
string prop = "Ana are 3 mere";
prop[8] = '9';
cout << prop; // se va afisa Ana are 9 mere
Adăugarea de text la final
Ce facem atunci când avem un text și vrem să mai adăugăm text la finalul lui?
Să presupunem că avem textul: Pana acum am invatat C++. Ce facem dacă vrem să adăugăm la final si Java pentru
a obține Pana acum am invatat C++si Java (spațiul lipsește intenționat).
Poți să îți dai seama de ce următoarea secvență de cod nu funcționează?
string text = "Pana acum am invatat C++";
int lg = text.size();
text[lg] = 's';
text[lg+1] = 'i';
text[lg+2] = ' ';
text[lg+3] = 'J';
text[lg+4] = 'a';
text[lg+5] = 'v';
text[lg+6] = 'a';
în cazul în care nu ți-ai dat seama, acest lucru se întâmplă deoarece, la fel ca și în cazul șirurilor obișnuite, șirul
text are poziții între 0 și lg - 1, iar accesarea oricărei alte poziții va duce la o accesare invalidă și cel mai probabil
la o eroare.
Operatorul +
În schimb, spre deosebire de șirurile obișnuite de caractere, string suportă operatorul + pentru concatenarea
(lipirea) textelor.
Putem rezolva problema de mai sus în felul următor:
string text = "Pana acum am invatat C++";
text += "si Java";
cout << text.size() << " " << text; // s-a modificat dimensiunea lui text
// si s-a salvat textul nou
Putem folosi + și pentru lipirea variabilelor de tip string și crearea de text nou.
Continuă 
20.03.2022, 23:42 WellCode
https://learn.wellcode.ro/page/stringuri-modificare 2/3
#include <iostream>
#include <string>
using namespace std;
int main() {
 string nume, prenume, persoana;
 cout << "Introdu numele tau:";
 cin >> nume;
 cout << "Introdu prenumele tau:";
 cin >> prenume;
 persoana = nume + prenume;
 cout << persoana;
 return 0;
}
Cel mai bun mod în care poți să înțelegi cum funcționează operatorul + pentru variabile de tip string este să
experimentezi pe cont propriu și să scrii cât mai multe programe în care să îl folosești.
Atenție
Operatorul + nu funcționează în unele cazuri cum te-ai aștepta. De exemplu dacă încerc să scriu "Ana" + " are
mere" voi primi eroare de compilare. Acest lucru nu este un inconvenient deoarece aș fi putut scrie direct "Ana are
mere".
Ștergerea de text
Pentru a șterge text dintr-un string, poți folosi funcția erase căreia îi vei da poziția de început de unde vrei să
începi să ștergi și numărul de caractere pe care vrei să-l ștergi:
string text = "Pana acum am invatat C++ si Java";
text.erase(24, 8);
cout << text; // va afisa Pana acum am invatat C++
cout << text.size(); // va afisa 24
Ștergerea ultimului caracter
Dacă vrei să ștergi ultimul caracter dintr-un string poți să faci s.erase(s.size() - 1, 1), însă există o variantă mai
simplă: poți să apelezi funcția pop_back care șterge ultimul caracter din șir:
string text = "copiii";
text.pop_back(); // text va contine acum copii
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    string nume , prenume, nume_complet;///= "filip", prenume = "luci", nume_complet;
    cin >> nume >> prenume;
    nume_complet = nume + " " + prenume;
    ///for (int i = 0; i < prenume.size(); ++i)
        nume_complet.erase(nume.size(), prenume.size());
    cout << nume_complet;

    return 0;
}
