/*
Rotirea unei matrivi spre stanga
*/

#include <iostream>
using namespace std;

int main() {
    int N, M, mt[301][301], aux[301][301];
    cin >> N >> M;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            cin >> mt[i][j];
        }
    }
    for (int i = 1;i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            aux[M + 1 -j][i] = mt[i][j];
        }
    }
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            cout << aux[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
