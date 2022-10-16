#include <iostream>
using namespace std;

int main() {
    int n, m, k, i, j, a[402][402];
    cin >> n >> m >> k;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n; ++i) {
        for (j = k; j < m; ++j) {
            a[i][j] = a[i][j + 1];
        }
    }
    --m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
