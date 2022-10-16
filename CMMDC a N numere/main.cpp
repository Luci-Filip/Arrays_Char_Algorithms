#include <iostream>
using namespace std;

int v[50000001];

int cmmdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, x, rest;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    rest = v[1];
    for (int i = 0; i < n; ++i) {
        rest = cmmdc(v[i], rest);
        v[i] = v[i + 1];
    }
    cout << rest;
    return 0;
}
