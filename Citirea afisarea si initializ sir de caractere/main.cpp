#include <iostream>
using namespace std;

char s[50];
int n;

int main() {

  cin>>n;
  for(int i = 0; i < n; ++i) cin>>noskipws>>s[i];
  for(int i = 0; i < n; ++i) cout<<i<<' '<<s[i]<<'\n';
  return 0;
}
