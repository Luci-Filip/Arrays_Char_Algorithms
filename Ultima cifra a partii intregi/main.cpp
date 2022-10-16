/*
Ultima cifră a părții întregi
Să se scrie o funcție numită ultimaCifraDinPI care primește un număr rațional și returnează ultima cifră din partea
întreagă a acestuia
Semnătură funcție
Funcția trebuie să se numească ultimaCifraDinPI.
Funcția trebuie să primească un parametru rațional și să returneze un int care să stocheze ultima cifră a
părții întregi a numărului dat.
Restricții
Numărul dat va fi mai mare decât 0 și mai mic decât 2 000.
Exemplu
ultimaCifraDinPI(42.256) va returna 2.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int ultimaCifraDinPI(double n) {
    int x = (int)n;
    return x % 10;
}
int main() {
    double n;
    cin >> n;
    cout << ultimaCifraDinPI(n);
    return 0;
}
