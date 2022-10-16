#include <iostream>
using namespace std;

int sumaCifrePare(int n) {
    int s = 0;
    while (n != 0) {
        if (n % 10 % 2 == 0) {
            s = s + n % 10;
        }
        n /= 10;
    }
    return s;
}
int main() {
    int n;
    cin >> n;
    cout << sumaCifrePare(n);
    return 0;
}
