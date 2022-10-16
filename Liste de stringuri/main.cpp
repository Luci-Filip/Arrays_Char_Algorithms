/*
Studiu de caz: Listă de string-uri
Paul, un mare utilizator WellCode, tocmai a terminat toate cursurile de pe platformă și acum vrea să devină
milionar. Pentru a-și atinge acest scop el a început să creeze un sistem de operare care să întreacă Windows, OS
X și Linux și să-i aducă mult dorita avere.
Problema
Funcționalitatea care crede el că îi va aduce faimă este faptul că le va permite utilizatorilor să își sorteze fișierele
așa cum vor ei. Totuși, în momentul în care utilizatorul deschide un director cu mai multe fișiere, indiferent de
ordinea acestora, tastarea unei litere va deschide fișierul cel mai mic lexicografic care începe cu acea literă. Mai
precis, dacă am ordona toate numele de fișiere alfabetic, se va deschide fișierul care începe cu litera dată și e
primul din ordonarea lor alfabetică.
Date de intrare
De pe prima linie se va citi n, reprezentând numărul de fișiere stocate de către utilizator.
Pe următoarele n linii se vor afla denumirile fișierelor stocate, în ordinea definită de către acesta.
Pe ultima linie se va afla litera tastată de utilizator.
Date de ieșire
Se va afișa numele de fișier minim lexicografic care începe cu litera dată.
Exemplu
3
Poza vacanta 1
Poza vacanta 2
Poz vacanta 3
P
Răspuns: Poz vacanta 3
Stocarea datelor
Pentru a stoca lista de fișiere vom folosi un șir de tip string:
string fisiere[100];
Citirea datelor
De cele mai multe ori citirea datelor este foarte simplu de făcut. Totuși, dacă vom folosi modul tradițional de a citi
numere pentru citirea lui n, vom întâmpina o problemă.
Dacă rulăm codul următor vom observa că vor fi afișate doar primele n - 1 nume de fișiere.
*/

#include <iostream>
#include <string>
using namespace std;

int n;
string fisiere[100];

int main()
{
  cin >> n;
  getline(cin, fisiere[0]);
  for (int i = 0; i < n; ++i)
    getline(cin, fisiere[i]);
    char litera;
    cin >> litera;
  for (int i = 0; i < n; ++i)
    cout << fisiere[i] << "\n";
    return 0;
}
