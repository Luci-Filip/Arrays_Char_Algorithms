#include <iostream>
using namespace std;

int main() {
    int n, i, j, m[101][101];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            cin >> m[i][j];
        }
    }
    cin >> i >> j;
    while (i <= n && j <= n){
        cout << m[i][j] << " ";
        ++i;
        ++j;
    }
    return 0;
}
