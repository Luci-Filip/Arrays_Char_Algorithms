#include <iostream>
using namespace std;

int f(int a, int b) {
  return a;
  ++b;
  return b;
}

int main() {
  cout<<f(1, 2);
  return 0;
}
