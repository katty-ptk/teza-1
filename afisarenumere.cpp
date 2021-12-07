/*

    Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.

    ex: n = 5
    output: 1 2 3 4 5

 */

#include <iostream>
using namespace std;

int main() {

    // n - cate numere sunt
    // x - iau nr
    // i - for
    int n, i, x; 

    cout << "n = "; cin >> n;   // citeste n ( cate nr sunt )

    // Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.
    for ( i = 1; i <= n; i++ ) {    // i de la 1 la n
        cout << i << " ";   // se afiseaza i
    }

    cout << endl;  

    return 0;
}