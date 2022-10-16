/*
Adunarea a 2 numere mari

Care sunt tipurile de date din C++ care pot să rețină numere? Cât de mari pot să fie numerele cu care lucrezi
într-un program?
După cum ai văzut, numere salvate într-un int pot să aibă valori până la aproximativ 2 * 10^9, iar dacă folosești
long long poți salva valori până la ~ 9 * 10^18. Ce faci dacă ai nevoie de valori mai mari?
O posibilitate e să salvezi cifrele numărului într-un șir. În această problemă vei lucra cu astfel de numere mari: ți
se vor da 2 șiruri reprezentând 2 numere mari și va trebui să afli suma lor, salvând cifrele rezultatului într-un al
treilea șir.
Înainte să treci mai departe, gândește-te puțin singur cum ar arăta cele 2 numere mari și cum poți să le
reprezinți pentru a putea calcula ușor suma lor!
În această problemă, vom memora cifrele numărului în șir începând cu cea mai din dreapta, iar pe poziția 0 a
șirului vom salva numărul total de cifre. Astfel, dacă vrem să convertim numărul 87311 în formatul de număr mare,
el va arăta în felul următor: int numar[6] = {5, 1, 1, 3, 7, 8};.
De ce am salvat cifrele în ordine inversă?
Gândește-te la cazul în care ai de adunat 2 numere. În mod firesc, când faci adunarea pe hârtie, începi cu cifrele
din dreapta și te deplasezi spre stânga. Salvându-le în această formă, parcurgi șirurile de la stânga la dreapta
pentru a le aduna. De asemenea, ce se intâmplă când rezultatul sumei are o cifră în plus? În această
reprezentare, o poți adăuga pur și simplu pe ultima poziție, pe când altfel ar fi trebuit să muți toate cifrele mai la
dreapta pentru a-i face loc!
Cerință
Definește funcția aduna, care primește ca parametri 3 șiruri de numere întregi, a, b și rezultat. La finalul execuției,
șirul rezultat va conține rezultatul sumei numerelor salvate în a și b. Toate cele 3 șiruri vor respecta formatul
descris mai sus.
Semnătură funcție
Numele funcției va fi aduna
Funcția va avea 3 parametri de tip întreg: a[], b[] și rezultat[]
Funcția va fi de tip void
Restricții
1 ≤ a[0], b[0] ≤ 1 000
Elementele celor două șiruri (exceptând primul element) sunt numere naturale din intervalul [0, 9] (cifre)
Se garantează că a[a[0]] și b[b[0]] (primele cifre ale celor 2 numere) nu vor avea valoarea 0
Exemplu
a[] = {5, 1, 2, 2, 5, 8}; b[] = {6, 2, 2, 2, 6, 7, 8}
În urma apelului funcției aduna(a, b, rezultat), șirul rezultat[] devine:
rezultat[] = {6, 3, 4, 4, 1, 6, 9}
*/

#include <iostream>
using namespace std;

void aduna(int a[1001],int b[1001],int rezultat[2002]) {
    int t = 0, maxi;
    if (a[0] < b[0]) {
        maxi = b[0];
        for (int i = a[0] + 1; i <= b[0]; ++i)
            a[i] = 0;
    }
    else {
        maxi = a[0];
        for (int i = b[0] + 1; i <= a[0]; ++i)
            b[i] = 0;
    }
    int i;
    for (i = 1; i <= maxi; ++i){
        int cifra = a[i] + b[i] + t;
        rezultat[i] = cifra % 10;
        t = cifra / 10;
    }
    if (t)
        rezultat[i] = t;
    else
        --i;
    rezultat[0] = i;
}
int main() {
    int a[100],b[100],rezultat[200], a, b;
    cin >> a >> b;
    aduna(a, b, rezultat);
    cout << rezultat;
    return 0;
}
