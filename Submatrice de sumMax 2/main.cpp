#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, a[51][51], b[51][51], smax = -3000;
    cin >> n >>m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= m; ++j)
            b[i][j] = b[i - 1][j] + a[i][j];
    if (b[i][j] > smax) {
        smax = b[i][j];
    }
    cout << smax;
    return 0;
}
