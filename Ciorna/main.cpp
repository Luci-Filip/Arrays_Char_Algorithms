#include <iostream>
using namespace std;

int v[252000];
int main() {
    int n, m, k, x, mt[501][501], p = 0, ok;
    cin >> n >> m;
    for (int i = 1;i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mt[i][j];
        }
    }
    cin >>k;
    for (int l = 1; l <= k; ++l) {
        cin >> x;
        v[++p] = x;
        ok = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
            if (v[p]==mt[i][j]) {
                ok = 1;
                break;
            }
            cout << "(" << i << ")";
            }
        }
        if (ok == 1) {
            cout << "DA\n";
        } else {
            cout << "NU\n";
        }
    }
    return 0;
}
