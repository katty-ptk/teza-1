/* sa se afiseze figura de mai jos
n = 5

         1 2 3 4 5 ( j )
==================
 1 |     - - - - *
 2 |     - - - * *
 3 |     - - * * *
 4 |     - * * * *
 5 |     * * * * *
( i )
*/

#include <iostream>
using namespace std;

int main() {

    int n, i, j, k;

    cout << "n = "; cin >> n; // citire nr randuri si coloane

    for ( i = 1; i <= n; i++ ) {    // se afiseaza 5 randuri
        for ( j = 1; j <= n - i; j++ ) {    // se afiseaza n-i spatii
            cout << " ";
        }

        for ( k = 1; k <= i; k++ ) {    // se afiseaza i stelute
            cout << "*";
        }

        cout << endl;   // trecere pe rand nou dupa ce se afiseaza n elemente pe rand
    }

    return 0;
}