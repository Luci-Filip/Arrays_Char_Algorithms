#include <iostream>
using namespace std;

///Se dă un număr N reprezentat în baza 10. Să se afle de câte ori apare fiecare cifră de la 0 la 3 în reprezentarea sa în baza 4.
/// pentru 1000000 se afiseaza 5 2 1 2
int main() {
    int n, contor_0 = 0, contor_1 = 0, contor_2 = 0, contor_3 = 0;
    cin >> n;
    while (n) {
        if (n % 4 == 0) {
            ++contor_0;
        }
        if (n % 4 == 1) {
            ++contor_1;
        }
        if (n % 4 == 2) {
            ++contor_2;
        }
        if (n % 4 == 3) {
            ++contor_3;
        }
        n /= 4;
    }
    cout << contor_0 << " " << contor_1 << " " << contor_2 << " " << contor_3;
    return 0;
}
