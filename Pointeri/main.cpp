#include <iostream>
using namespace std;

/*
int main() {
  int v[3];
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  int *intPtr = v;
  for (int i = 0; i < 3; ++i) {
    cout<<*intPtr<<" ";
    ++intPtr;
  }
  --intPtr;
  cout<<*intPtr;
}
*/
int main() {
  int v[3];
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  int *intPtr = v;
  intPtr += 2;
  cout<<*intPtr<<" ";
}
