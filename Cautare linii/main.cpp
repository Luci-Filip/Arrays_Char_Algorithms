/*
Cautare linii intr-o matrice
*/

#include <iostream>
using namespace std;

int ap[252000];
int main() {
    int n, m, q, x, y, mt[501][501], ok1, ok2;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
            ++ap[mt[i][j]];
        }
    }
    cin >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        cin >> y;
        if (x < y && x != y && ap[x]) {
            ok1 = 1;
        }
        else {
            ok2 = 1;
        }
    }
   // for (int i = 1; i <= q; ++i) {
        if (ok1 == 1) {
            cout << "da\n";
        }
        if (ok2 == 1) {
            cout << "nu";
        }
    //}
    return 0;
}
