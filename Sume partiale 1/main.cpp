#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int n, v[100], sp[100];
  ifstream fin("date.in");
  ofstream fout("date.out");
  fin>>n;
  for (int i = 1; i <= n; ++i)
    fin>>v[i];
  sp[0] = 0;
  sp[1] = v[1]; // suma primului element e primul element
  for (int i = 2; i <= n; ++i)
    sp[i] = sp[i - 1] + v[i];

  // citim subsecventele pentru care vrem sa aflam suma
  int numarSubsecvente, a, b;
  fin>>numarSubsecvente;
  for (int i = 1; i <= numarSubsecvente; ++i) {
    fin>>a>>b;
    fout<<sp[b] - sp[a-1]<<"\n";
  }
  return 0;
}
