#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    string text = "Invat sa programez in C";
    text.resize(text.size() + 2, '+'); // elimin ultimele 2 caractere
    cout << text; // se va afisa Invat sa programez in C
    */
    /*
    string text ;///= "Astazi voi rezolva 3 probleme si pe urma voi lua o pauza.";
    string caut;
    getline(cin, text);
    getline(cin, caut);
    size_t poz = text.find(caut);
    if (poz == string::npos)
        cout << "Textul introdus de tine nu se gaseste in textul initial";
    else
        cout << "Am gasit " << caut << " la pozitia: " << poz;
        */
        string text = "Da, sa traiti";
        text.erase(2, text.size() - 2);
        cout << text;
    return 0;
}
