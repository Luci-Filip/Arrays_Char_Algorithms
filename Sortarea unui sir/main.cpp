#include <iostream>
using namespace std;

void sortare(int N, int v[101]) {
    int aux;
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

        }
    }
}
int main() {
    int N, aux = 0, v[101];
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    sortare(N, v);
    for (int i = 0; i < N ; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
