/*
Inversare cuvinte
Se dă un text format din mai multe cuvinte, semne de punctuație și caractere speciale care pot fi stocate
folosind char. Să se interschimbe pentru fiecare cuvânt prima parte a sa cu ultima parte a sa. În cazul în care
cuvântul are lungime impară, litera din mijloc rămâne pe poziția sa.
Un cuvânt este o succesiune de litere mari și mici ale alfabetului englez.
Date de intrare
Se va citi textul, care se poate afla pe mai multe linii.
Date de ieșire
Programul va afișa textul după aplicarea transformărilor cerute.
Restricții și precizări
Lungimea totală a textului este mai mică sau egală cu 2 000.
Exemple
Date de intrare
Ana, dar si Maria invata sa programeze pe WellCode!!

Invata si tu sa programezi$$

Date de ieșire
anA, rad is iarMa atainv as amezeprogr ep CodeWell!!

ataInv is ut as ameziprogr$$

*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("date.in");
    char text[2001];
    while (!fin.eof()) {
        char textFinal[2001] = "";

        fin.getline(text, 2001);

        char *cuvant = strtok(text, " .,!?-_@#$%^&*()+[]{};:'\<>/`~");
        while(cuvant) {

            int lungime = strlen(cuvant);
            ///cout << ">> Cuvant: " << cuvant << " (" << lungime << ")\n";

            int limita = 0;
            if(lungime % 2 == 0)
                strcpy(textFinal, cuvant + lungime / 2);
            else
                strcpy(textFinal, cuvant + lungime / 2 + 1);

           /// cout << ">> Prima parte: " << textFinal << "\n";

            int finalCrt = strlen(textFinal);
            if(lungime % 2 == 1) {
                textFinal[finalCrt] = cuvant[lungime / 2];
                finalCrt++;
            }

            for(int i = 0; i < lungime / 2; i++) {
                textFinal[finalCrt] = cuvant[i];
                finalCrt++;
            }
            textFinal[finalCrt] = '\0';
            cout << textFinal << " ";

            cuvant = strtok(NULL, " .,!?-_@#$%^&*()+[]{};:'\<>/`~");
        }
    }
    cout << "\n";

    return 0;
}
