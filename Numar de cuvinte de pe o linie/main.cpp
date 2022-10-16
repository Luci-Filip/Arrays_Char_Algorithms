/*
Studiu de caz - numărul de cuvinte de pe o linie
Se dă un text care se află pe o singură linie. Să se afle numărul de cuvinte din text. Un cuvânt este o succesiune
de litere mari și mici, iar între 2 cuvinte consecutive se pot afla spații sau alte caractere care nu sunt litere.
Vom împărți problema în mai multe părți. Prima dată trebuie să citim textul. Pe urmă trebuie să vedem pentru
fiecare caracter dacă face parte dintr-un cuvânt și pe baza acestor informații să actualizăm numărul de cuvinte.
Citirea
Deoarece știm că textul este pe o linie, vom folosi funcția getline
Aflarea dacă un caracter face parte dintr-un cuvânt
Un caracter face parte dintr-un cuvânt dacă este o literă mare sau mică a alfabetului. Ca să verificăm acest
lucru vom scrie o funcție pentru asta. Numerele corespunzătoare literelor mici sunt în ordine crescătoare. 'a' este
97, 'b' este 98, iar 'z' este 122. Același lucru se întâmplă și în cazul literelor mari. 'A' este '65', 'B' este '66', iar 'Z'
este 90. Practic 'a' < 'b', 'b' < 'c', 'A' < 'B' și așa mai departe. De asemenea, putem observa că literele mici au
coduri ASCII mai mari decat cele mari, deci 'A' < 'a' si chiar 'Z' < 'a'. Același lucru se întâmplă și în cazul cifrelor:
'0' < '1', '1' < '2' și așa mai departe. Atenție, aici este vorba despre caracterele care reprezintă cifrele.
Practic ca să verificăm dacă un caracter este o literă, trebuie să îi comparăm numărul corespunzător cu
numerele corespunzătoare primei și ultimei litere din alfabet.
Parcurgerea și numărarea cuvintelor
Pentru a număra cuvintele din șir vom verifica pentru fiecare caracter care nu aparține de un cuvânt dacă avem
un cuvânt care s-a terminat pe poziția anterioară. Pentru a face acest lucru vom folosi o variabilă pe care de
fiecare dată când întâlnim o literă, o vom inițializa cu 1. Această variabilă ne va spune dacă la poziția anterioară
am fost în interiorul unui cuvânt.
La întâlnirea unui separator (un caracter care nu este literă, deci desparte cuvintele), vom seta variabila din nou
la 0.

*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int este_litera(char c) {
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
    return 1;
  return 0;
}

int numar_cuvinte(char sir[100]) {
  int n = strlen(sir);
  int am_cuvant = 0; // nu avem niciun cuvant deoarece suntem la inceputul
  //sirului
  int numar_cuvinte = 0;
  for (int i = 0; i < n; ++i) {
    if (este_litera(sir[i]))
      am_cuvant = 1;
    else if (am_cuvant == 1) {
      // s-a terminat cuvantul
      ++numar_cuvinte;
      am_cuvant = 0;
    }
  }
  if (am_cuvant == 1) // cazul in care sirul se termina cu o litera
    ++numar_cuvinte;
  return numar_cuvinte;
}

int main() {
  char sir[100];
  cin.getline(sir, 100);
  cout<<numar_cuvinte(sir);
}
