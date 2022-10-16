#include <iostream>
using namespace std;

int n, m, q, mt[101][101];

int main() {
  cin>>n>>m>>q;
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
      cin>>mt[i][j];
  int x1, y1, x2, y2, sum;
  for (int t = 1; t <= q; ++t) {
      cin>>x1>>y1>>x2>>y2;
      sum = 0;
    for (int i = x1; i <= x2; ++i)
      for (int j = y1; j <= y2; ++j)
        sum += mt[i][j];
    cout<<"Suma este: "<<sum<<"\n";
  }
  return 0;
}
