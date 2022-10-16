#include <iostream>
using namespace std;

int main() {
    int n, m, k, i, j, a[500][500];
    cin >> n >> m >> k;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> a [i][j];
        }
    }
    for (i = k; i < n; ++i) {
        for (j = 1; j <= m; ++j) {
            a[i][j] = a[i+1][j];
        }
    }
    --n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
