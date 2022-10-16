#include <iostream>
using namespace std;

int ap[10];
int main() { /// 5912; 591 592 512 912
    int n, copie_n, nr_min = 0, nr = 0;
    int cif_max = 0, putere = 1;
    cin >> n;
    copie_n = n;
    while (n != 0) {
        if (n % 10 > cif_max) {
            cif_max = n % 10;
        }
        ++ap[cif_max];
        n /= 10;
        cout << ap[cif_max] << "\n";
    }
    while (copie_n != 0) {
        if (copie_n % 10 != cif_max) {
            nr_min = (copie_n % 10) * putere + nr_min;
            putere *= 10;
            ++nr;
        }
        copie_n /= 10;
    }
    cout << nr_min;
    return 0;
}
