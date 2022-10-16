#include <iostream>
using namespace std;

int main () {
    int n, i, j, k, m[101][101];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            cin >> m[i][j];
        }
    }
    for (k = 1; k <= n; ++k) {
        i = n;
        j = k;
        while (j > 0) {
            cout << m[i][j] << " ";
            --i;
            --j;
        }
    }
    for (k = n - 1; k >= 1; --k) {
        j = n;
        i = k;
        while (i > 0) {
            cout << m[i][j] << " ";
            --i;
            --j;
        }
    }
    return 0;
}
