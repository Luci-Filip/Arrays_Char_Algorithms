#include <iostream>
using namespace std;

unsigned long long a, b, produs, r;

int main() {
    cin >> a >> b;
    produs = a * b;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    cout << produs / a;
    return 0;
}
    return 0;
}
