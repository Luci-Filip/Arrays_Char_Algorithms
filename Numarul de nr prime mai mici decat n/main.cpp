#include <iostream>
using namespace std;
/// Numarul de numere prime mai mici decat n; exemplu: pentru 11 -> 5 pentru 50000000 -> 3001134.
/*
int prim(int n)
{
    if(n == 0 || n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n % 2 == 0)
        return 0;
    for(int i = 3 ; i * i <= n ; i += 2)
        if(n % i == 0)
            return 0;
    return 1;
}
int main () {
   int n, nr = 0;
   cin >> n;
    while (n > 0) {
        if (prim(n) == 1)
            ++nr;
    --n;
    }
   cout << nr;

    return 0;
}*/
int n, ciur[50000001], nrprime, prime[50000000];

void gen_ciur () {
    ciur[1] = ciur[0] = 1;
    for (int i = 2; i * i <= n; ++i)
        if(ciur[i] == 0)
            for (int j = 2; i * j <= n; ++j)
                ciur[i * j] = 1;
    for (int i = 2; i <= n; ++i)
        if (ciur[i] == 0)
            prime[++nrprime] = i;
}

bool isPrime(int n) {
    int ind = 1;
    if (n == 2)
        return true;
    while (n > 1) {
        int p = 0;
        while (n % prime[ind] == 0)
            n /= prime[ind], ++p;
        if (p)
            return false;
        ++ind;
        if (prime[ind] * prime[ind] > n)
            return true;
    }
    return true;
}

int main() {
    cin >> n;
    gen_ciur();
    cout << nrprime;
    return 0;
}
