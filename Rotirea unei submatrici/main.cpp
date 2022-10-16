/*
Rotirea unei submatrici
Se dă o matrice mt cu n linii și m coloane. Să se rotească o submatrice pătratică dată cu 90 de grade spre stânga.
Date de intrare
De pe prima linie se citesc de la tastatură numerele n și m. De pe următoarele n linii se citesc m numere naturale
care reprezintă elementele matricei. De pe ultima linie se citesc numerele i, j și l. i și j reprezintă linia și coloana
colțului din stânga sus a submatricei. l reprezintă numărul de linii și de coloane al submatricei.
Date de ieșire
Programul va afișa pe ecran matricea rezultată în urma rotirii.
Restricții și precizări
1 ≤ n, m ≤ 50
1 ≤ mt[i][j] ≤ 3 000
1 ≤ i ≤ n,
1 ≤ j ≤ m
1 ≤ i + l - 1 ≤ n
1 ≤ j + l - 1 ≤ m
Liniile și coloanele matricei sunt numerotate începând de la 1
Exemplu
Date de intrare
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
2 2 2

Date de ieșire
1 2 3 4
5 7 11 8
9 6 10 12
13 14 15 16

*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, l, mt[51][51], subMt[51][51], auxSub[51][51], nrPatrate, N;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mt[i][j];
        }
    }
    cin >> i >> j >> l;
    /*
    //1. Daca se roteste o intreaga matrice

    N = n;
    if (N % 2 == 0) {
        nrPatrate = N/2;
    }
    else {
        nrPatrate = N/2 + 1;
    }
    //Rotire de matrice la stanga unde N = nr de linii si coloana (rotirea se aplica doar la matrici patratice!!!)
    for (int indexI = 1; indexI <= nrPatrate; indexI++) {
        for (int indexJ = indexI; indexJ <= N - indexI + 1; indexJ++) {
            aux[indexJ][indexI] = mt[indexI][N - indexJ + 1];
            aux[N - indexI + 1][indexJ] = mt[indexJ][indexI];
            aux[N - indexJ + 1][N - indexI + 1] = mt[N - indexI + 1][indexJ];
            aux[indexI][N - indexJ + 1] = mt[N - indexJ + 1][N - indexI + 1];
        }
    }
    */
    //2. Daca se roteste o submatrice

    N = l;//dimensiunea submatricei este chiar l
    if (N % 2 == 0) {
        nrPatrate = N/2;
    }
    else {
        nrPatrate = N/2 + 1;
    }

    int indexISub = 1;
    int indexJSub = 1;
    //Indexare submatrice de la (1,1) la (N,N)
    for (int indexI = i; indexI <= i + N - 1; indexI++) {
        indexJSub = 1;
        for (int indexJ = j; indexJ <= j + N - 1; indexJ++) {
            subMt[indexISub][indexJSub] = mt[indexI][indexJ];
            auxSub[indexISub][indexJSub] = mt[indexI][indexJ];
            indexJSub++;
        }
        indexISub++;
    }

    //Rotire la stanga generica de matrice patratica
    for (int indexI = 1; indexI <= nrPatrate; indexI++) {
        for (int indexJ = indexI; indexJ <= N - indexI + 1; indexJ++) {
            auxSub[indexJ][indexI] = subMt[indexI][N - indexJ + 1];
            auxSub[N - indexI + 1][indexJ] = subMt[indexJ][indexI];
            auxSub[N - indexJ + 1][N - indexI + 1] = subMt[N - indexI + 1][indexJ];
            auxSub[indexI][N - indexJ + 1] = subMt[N - indexJ + 1][N - indexI + 1];
        }
    }

    //Inlocuire submatrice originala cu submatricea rotita
    for (int indexI = 1; indexI <= N; indexI++) {
        for (int indexJ = 1; indexJ <= N; indexJ++) {
            mt[indexI + i - 1][indexJ + j - 1] = auxSub[indexI][indexJ];
        }
    }

    //Afisare matrice rezultata
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
