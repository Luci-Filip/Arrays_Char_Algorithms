/*
Cautare de elemente intr-o matrice
*/
#include <iostream>
using namespace std;

bool ap[252000]; /// true sau false

int main() {
    int n, m, mt[501][501], k, x;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
            ap[mt[i][j]] = true;
        }
    }
    cin >> k;
    for (int l = 1; l <= k; ++l) {
        cin >> x;
        if (ap[x]) {
            cout << "DA\n";
        }
        else {
            cout << "NU\n";
        }
    }
    return 0;
}

