#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("exemplu.txt");
    string text;
    while (getline(fin, text))
    cout << text << "\n";

    return 0;
}
