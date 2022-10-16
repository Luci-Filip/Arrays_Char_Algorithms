#include <iostream>
using namespace std;

int main() {
    int n, i, v[10];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
        if (i == 8) {
            cout << i << " ";
            break;
        }

    }
     cout << "Fire" << "\n";
    return 0;
}
