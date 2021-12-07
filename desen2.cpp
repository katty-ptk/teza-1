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

    int n;
    cout << "n = "; cin >> n;

    for ( int i = 1; i <= n; i++ ) { // n randuri
        for ( int j = 1; j <= n; j++ ) {    // n elemente pe rand
            if ( j <= n - i )
                cout << " ";
            else
                cout << "*";
        }

        cout << endl;
    }

    return 0;
}