#include <iostream>

using namespace std;

int main() {
    int n, m, i, j, v[100] [100];
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            cin >> v[i][j];
        }
    }
    for (i = 1;i <= n; ++i) {
        for (j =1; j <= m; ++j) {
            cout << v[i] [j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
