#include <iostream>
using namespace std;

void afisareSolutii(int c) {
    int x, y, z;
    for (x = 0; x < c; ++x) {
        for (y = x; y < c; ++y) {
            z = c - x - y;
            if (z >= y) {
                cout << x << " " << y << " " << z << "\n";
            }
        }
    }
}
int main() {
    int c;
    cin >> c;
    afisareSolutii(c);
}
