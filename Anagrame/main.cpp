/*
Anagrame
Se dă un număr n și n + 1 cuvinte formate din litere mici ale alfabetului englez. Să se afle numărul de cuvinte
(excluzându-l pe primul) care sunt anagrame ale primului cuvânt.
Un cuvânt e anagramă a altui cuvânt dacă ele conțin aceleași litere, nu neapărat în aceeași ordine.
Date de intrare
Pe prima linie se află numărul n. Pe următoarele n + 1 linii se află cuvintele.
Date de ieșire
Programul va afișa numărul cerut.
Restricții
1 ≤ n ≤ 50
Lungimea fiecărui cuvânt este mai mică sau egală cu 100 000.
Exemple
Date de intrare
4
server
revers
serve
sserver
server
Date de ieșire
2
Explicație
revers și server sunt anagramele cuvântului server
*/

#include <iostream>
#include <cstring>

using namespace std;

int AP_cuvant[128];
int AP_temp[128];
void umpleAP(char cuvant[100001], int original) {
    int lung_cuvant = strlen(cuvant);

    if(original == 1)
        for(int i = 0; i < lung_cuvant; i++)
            AP_cuvant[cuvant[i]]++;
    else if(original == 2)
        for(int i = 0; i < lung_cuvant; i++)
            AP_temp[cuvant[i]]++;
}

void curataAP() {
    for(int i = 0; i < 127; i++)
        AP_temp[i] = 0;
}

bool verifica() {
    for(int i = 0; i< 127; i++) {
        if(AP_cuvant[i] != AP_temp[i])
            return false;
    }
    return true;
}

int main() {

    int n, nr = 0;
    char cuvant[100001];
    cin >> n;
    cin.get();

    cin.getline(cuvant, 100001);
    umpleAP(cuvant, 1);

    for (int i = 1; i <= n; ++i) {
        cin.getline(cuvant, 100001);
        umpleAP(cuvant, 2);
        if(verifica() == true)
            nr = nr + 1;
        curataAP();
    }
    cout << nr;
    return 0;
}
