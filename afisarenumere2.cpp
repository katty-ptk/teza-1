/* 

    Se dă un număr natural n. Afișați pe o linie primele n numere naturale nenule în ordine crescătoare, iar pe linia următoare aceleași numere, dar în ordine descrescătoare.

    ex: n = 5
    output:
        1 2 3 4 5
        5 4 3 2 1

*/

#include <iostream>
using namespace std;

int main() {

    // n - cate nr sunt
    // i, j - contori
    int n, i, j;
    cout << "n = "; cin >> n; // citire n

    for ( i = 1; i <= n; i++ ) {    // i de la 1 la n
        cout << i << " ";   // afisam i
    }
    
    cout << endl;   // trecere pe rand nou

    for ( j = n; j >= 1; j-- ) {    // j de la n la 1
        cout << j << " ";   // afisam j
    }

    cout << endl;

    return 0;
}