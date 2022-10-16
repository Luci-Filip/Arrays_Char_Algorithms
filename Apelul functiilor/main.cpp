#include <iostream>
using namespace std;

int produs(int n1, int n2) {
  return n1 * n2;
}

int suma(int a, int b) {
  return a + b;
}

int main() {
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  cout<<produs(suma(a, b), suma(c, d));
}
