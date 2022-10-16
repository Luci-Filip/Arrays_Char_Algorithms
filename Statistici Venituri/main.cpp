/*
Statistici Venituri
Directorul unei companii dorește să facă o statistică despre veniturile companiei sale. El știe care au fost
veniturile companiei pe parcursul a n săptămâni și dorește să afle în ce fel s-au modificat ele pe parcursul
acestei perioade.
Deoarece are nevoie de un nou programator, iar tu tocmai îți cauți un nou job, te-a rugat în cadrul interviului să
faci un program care să calculeze acestă statistică. În cazul în care scrii un program corect, vei fi răsplătit cu un
nou loc de muncă.
Date de intrare
Se citește de la tastatură, pe prima linie un număr n. Pe a doua linie se citesc n valori, fiecare valoare
reprezentând veniturile companiei în fiecare din cele n săptămâni.
Date de ieșire
În cazul în care veniturile au crescut pe toată perioada, programul va afișa pe ecran mesajul Veniturile au crescut
cu:, urmat de n - 1 valori reprezentând procentele cu care au crescut veniturile companiei în săptămâna curentă
față de săptămâna anterioară.
În cazul în care veniturile au scăzut pe toată perioada, se va afișa mesajul Veniturile au scazut cu:, urmat de n - 1
valori, reprezentând procentele cu care au scăzut veniturile companiei pe parcursul fiecărei săptămâni, relativ la
săptămâna anterioară.
În cazul în care veniturile au rămas la fel pe toată perioada, se va afișa mesajul: Veniturile au ramas la fel.
Restricții și precizări
1 < n < 100
0 < venitul fiecărei săptămâni < 1 000
Fiecare din veniturile săptămânale este un număr real cu cel mult 3 zecimale după virgulă.
Rezultatele se vor afișa cu exact 3 zecimale după virgulă.
Se garantează că șirul de valori ale veniturilor este strict crescător, strict descrescător sau monoton.
Dacă o valoare procentuală este mai mare decât 100%, se va afișa ">100%".
Exemple
Date de intrare
4
2.13 3.2 6.7 13.25
Date de ieșire
Veniturile au crescut cu: 50.235% >100% 97.761%
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double v[101], venit = 0, produs = 0, week_1 = 0, week_2 = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        week_1  = v[i];
        week_2 = v[i + 1];
        produs = week_2 * 100;
        venit = produs / week_1 - 100;
        if (venit < 100 && venit < 60 && venit != 0) {
            cout <<fixed << setprecision(3) << "Veniturile au crescut cu:" << venit;
        }
        else if (venit > 100 && venit != 0) {
            cout << " >100% ";
        }
        else if (venit < 100 && venit > 50 && venit != 0) {
            cout << fixed << setprecision(3) << venit;
        }
    }
    if (!venit)
        cout << "Veniturile au ramas la fel";

    return 0;
}
