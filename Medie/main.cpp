#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(2) << (A + B + C) / 3;
    return 0;
}
