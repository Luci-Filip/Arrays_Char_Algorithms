/*
0 - Consecutivi
Alex este programator la o firmă de software din orașul lui, dar încă învață să programeze, așa că deocamdată
nu se descurcă excelent. Pentru a nu se face de rușine în fața șefului, vă pune pe voi să rezolvați problemele pe
care le primește. De data aceasta, trebuie să scrie o funcție ce primește un număr natural n ca și parametru și
returnează numărul maxim de cifre 0 aflate pe poziții consecutive în număr.
Semnătură funcție
Numele funcției este maxCons0
Funcția are un singur parametru de tip long long: n
Funcția returnează un număr întreg (de tip int), reprezentând numărul maxim de cifre 0 aflate pe poziții
consecutive în număr
Precizări
Soluția va conține doar definiția funcției.
Restricții
1 ≤ n ≤ 10
Exemplu
Funcția maxCons0(1080035) va returna valoarea 2
*/

#include <iostream>
using namespace std;

int maxCons0(long long N) {
    int numbers_of_zero = 0;
    int numbers_of_zeroMax = 0;
    while (N){
        long long numbers_of_N = N % 10;
        N /= 10;
        if (numbers_of_N == 0) {
            ++numbers_of_zero;
            if (numbers_of_zero > numbers_of_zeroMax) {
                numbers_of_zeroMax = numbers_of_zero;
            }
        }
        else {
            numbers_of_zero = 0;
        }
    }
    return numbers_of_zeroMax;
}
int main() {
    int N;
    cin >> N;
    cout << maxCons0(N);
    return 0;
}
