#include <iostream>
using namespace std;

void afisare(int n, int v[4]) {
  for (int i = 1; i <= n; ++i)
    cout<<v[i]<<" ";
  cout<<"\n";
}

// functia va scadea valoarea x din fiecare element al vectorului
void scade(int n, int v[4], int x) {
  for (int i = 1; i <= n; ++i)
    v[i] -= x;
}

int main() {
  int n = 3, v[4];
  v[1] = 10;
  v[2] = -3;
  v[3] = 5;
  afisare(n, v);
  scade(n, v, 6);
  afisare(n, v);
  return 0;
}

