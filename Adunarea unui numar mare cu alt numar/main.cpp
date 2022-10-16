/*
Adunarea unui număr mare cu alt număr

În problema aceasta ne vom folosi de metoda de a salva numerele mari pe care ai văzut-o într-o problemă
anterioară. Prin urmare, dacă nu ai rezolvat problema cu adunarea numerelor mari, întoarce-te la ea și asigurăte că ai înțeles cum arată un număr mare.
Problema aceasta e destul de similară, în continuare va trebui să aduni 2 numere mari. De data aceasta, vei
salva rezultatul în primul șir în loc să îl salvezi într-unul auxiliar.
Cerință
Definește funcția aduna, care primește ca parametri 2 șiruri de numere întregi, a și b. La finalul execuției, șirul a va
conține rezultatul sumei numerelor salvate inițial în a și b. Ambele șiruri vor respecta formatul descris mai sus, în
momentul în care funcția e apelată și după terminarea apelului.
Încearcă să rezolvi problema fără șiruri de numere auxiliare.
Semnătură funcție
Numele funcției va fi aduna
Funcția va avea 2 parametri de tip întreg: a[] și b[]
Funcția va fi de tip void
Restricții
1 ≤ a[0], b[0] ≤ 1 000
Elementele celor două șiruri (exceptând primul element) sunt numere naturale din intervalul [0, 9] (cifre)
Se garantează că a[a[0]] și b[b[0]] (primele cifre ale celor 2 numere) nu vor avea valoarea 0
Exemplu
a[] = {5, 1, 2, 2, 5, 8}; b[] = {6, 2, 2, 2, 6, 7, 8}
În urma apelului funcției aduna(a, b), șirul a[] devine:
a[] = {6, 3, 4, 4, 1, 6, 9}
*/

#include <iostream>
using namespace std;

void aduna(int a[1000], int b[1000]) {
    int i, t = 0;
    if (a[0] < b[0])
        a[0] = b[0];
    for (i = 1; i <= a[0]; ++i, t /= 10) {
        t = a[i] + b[i] + t;
        a[i] = t % 10;
    }
    if (t)
        a[++a[0]] = t;
}
int main()
{
    cout << "In progres!" << endl;
    return 0;
}
