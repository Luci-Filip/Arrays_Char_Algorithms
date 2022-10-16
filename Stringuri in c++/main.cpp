#include    <iostream>
#include    <string>

using namespace std;

int main () {
    /*
    string text = "Salut utilizatorule!";
        cout << text;
    */

    string text = "Uite un text!";
    for (auto car : text)
        cout << car;

    return 0;
}
