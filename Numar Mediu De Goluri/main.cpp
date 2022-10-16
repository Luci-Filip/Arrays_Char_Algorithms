#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, x, meci = 0,goluri = 0;
    cin >> n;
    while (n > 0) {
        cin >> x;
        goluri += x;
    ++meci;
    --n;
    }
    cout << fixed << setprecision(2) << goluri / meci ;
    return 0;
}
