/*
Venit Lunar
Directorul unei companii dorește să facă unele investiții în modernizarea companiei. Acesta vrea să afle venitul
mediu lunar al firmei sale, știind venitul pe parcursul a n săptămâni consecutive. Acest lucru îl va ajuta să decidă
dacă să facă sau nu investițiile pe care le are în plan.
Deoarece nu știe programare, directorul te-a angajat pe tine pentru a-i scrie un program care să-i calculeze
venitul mediu lunar.
Date de intrare
Se citește de la tastatură numărul n, urmat de n valori raționale, reprezentând veniturile pentru n săptămâni
consecutive.
Date de ieșire
Programul va afișa pe ecran venitul mediu al fiecărei luni. Pentru simplitate, considerăm că fiecare lună e
formată din exact 4 săptămâni consecutive.
Valorile afișate vor fi separate prin spații.
Restrictii și precizari
0 < n ≤ 100
0 ≤ venitul din fiecare săptămână ≤ 1 000
n este un număr natural divizibil cu 4
în problema vom considera că fiecare lună are exact 4 săptămâni
prima valoare din șirul de venituri săptămânale va corespunde întotdeauna primei săptămâni din lună.
Veniturile săptămânale sunt numere raționale cu cel mult 3 zecimale.
rezultatul se va afisa cu exact 3 zecimale după virgulă. Pentru a afișa exact 3 zecimale poți folosi funcția
setprecision.
Exemplu
Date de intrare
8
147.16 258.87 875.19 787.13 421.99 147 257 665.6

Date de ieșire
517.087 372.898
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, week = 0, average = 4;
    double x, month = 0;
    cin >> n;
    for (int i = 1; i <= n && average >= week; ++i) {
        cin >> x;
        month += x;
        ++week;
        if (week == average) {
            cout << fixed << setprecision(3) << month / week << " ";
            week = 0;
            month = 0;
        }
    }
    return 0;
}
