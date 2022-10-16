#include <iostream>
using namespace std;

int a; // variabila globala

int f(int b) {
  int y; //variabila locala
  ++a;
  return b - 1;
}

int main() {
  int x; // variabila locala
  cout<<a<<"\n";// va afisa 0
  cout<<f(2)<<"\n";// va afisa 1
  cout<<a<<"\n"; // va afisa 1 deoarece in apel am crescut valoarea lui a
}
