#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i, v[1000];
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cont = 0;
    while (next_permutation(v, v + n)) {
        if (v[i] == n)
           cout << v[i];
           ++cont;
    }

    return 0;
}
