#include <iostream>
using namespace std;

/*
struct Elev {
  char nume[100], prenume[100];
  double medie;
};

int main() {
  Elev e;
  cin >> e.nume >> e.prenume >> e.medie;
  cout << "elevul " << e.nume << " " << e.prenume << " are media: " << e.medie;
*/
struct Data {
  int zi, luna, an;
};

struct Masina {
  Data fabricatie;
  char marca[20], model[20];
};

int main() {
  Masina masini[10];
  int nrMasini;
  cin >> nrMasini;
  for (int i = 1; i <= nrMasini; ++i) {
    cin >> masini[i].fabricatie.zi >> masini[i].fabricatie.luna >> masini[i].fabricatie.an;
    cin >> masini[i].marca >> masini[i].model;
  }
  for (int i = 1; i <= nrMasini; ++i) {
    cout << masini[i].fabricatie.zi << " " << masini[i].fabricatie.luna << " " << masini[i].fabricatie.an;
    cout << masini[i].marca << " " << masini[i].model;
  }
    return 0;
}
