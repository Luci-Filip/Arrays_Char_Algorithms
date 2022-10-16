#include <iostream>
using namespace std;

int main() {
    int a, nr = 0;
    cin >> a;
    do {
        ++nr;
        a = a / 10;
    } while (a != 0);
    cout << nr;
    return 0;
}
