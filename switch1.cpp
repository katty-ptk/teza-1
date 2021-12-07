/*

    Se citesc n numere de la tastatura. In functie de optiunea aleasa, sa se afiseze:
        1 -> suma numerelor pare si pozitive
        2 -> numarul elementelor pare si cel al elementelor impare
        3 -> minimul dintre cele n nr citite
        4 -> daca sunt toate pozitive

    In cazul in care nu se alege o optiune valida, se va afisa mesajul: "Va rog introduceti o optiune dintre cele de mai sus."
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

    int n, sel, i, x;
    // recomandare: 
        // afisezi meniul intai
        // apoi sa citesti n


    // afisam meniul
    cout << "Introduceti: \n";
    cout << "1 - suma numerelor pare si pozitive \n";
    cout << "2 - numarul elementelor pare si cel al elementelor impare \n";
    cout << "3 - minimul dintre cele n nr citite \n";
    cout << "4 - daca sunt toate pozitive \n";

    cout << "Optiunea dvs: "; cin >> sel;   // citim selectorul ( optiunea )
    cout << endl;   // rand nou intre citirea selectorului si a lui n
    cout << "n = "; cin >> n; // citim n

    switch ( sel ) {
        case 1: { // suma numerelor pare si pozitive

            int suma = 0;

            for ( i = 1; i <= n; i++ ) {    // de n ori
                cout << "x = "; cin >> x;   // citim x

                if ( x > 0 && x % 2 == 0 ) {    // daca x e pozitiv si par
                    suma += x; // suma = suma + x;  // suma creste cu valoarea lui x  
                }
            }

            cout << "Suma numerelor pozitive si pare introduse este " << suma << endl;
            break;
        }

        case 2: { // numarul elementelor pare si cel al elementelor impare
            int nr_pare = 0, nr_impare = 0; // initializam numarul elem pare si nr elem impare cu 0

            for ( i = 1; i <= n; i++ ) {    // de n ori
                cout << "x = "; cin >> x;   // citim x

                if ( x % 2 == 0 ) { // daca x e par
                    nr_pare += 1;   // nr elem pare creste cu 1
                } else {    // altfel, daca x e impar
                    nr_impare += 1; // nr elem impare creste cu 1
                }
            }

            // afisam rezultatele
            cout << "Numarul elementelor pare: " << nr_pare << endl;
            cout << "Numarul elementelor impare: " << nr_impare << endl;
            break;
        }

        case 3: {   // minimul dintre cele n nr citite
            int min = INT_MAX;  // la scoala folosim maxint, nu INT_MAX
            
            for ( i = 1; i <= n; i++ ) {    // de n ori
                cout << "x = "; cin >> x;

                if ( x < min ) {    // daca x e mai mic decat min
                    min = x;    // min devine x
                }
            }

            // afisam rezultat
            cout << "Minimul numerelor introduse este: " << min << endl;
            break;
        }

        case 4: {   // daca toate sunt pozitive
            int toate_poz = 0;  // initializam cu 0 variabila pe care o folosim ca sa vedem daca toate nr sunt pozitive

            for ( i = 1; i <= n; i++ ) {    // de n ori
                cout << "x = "; cin >> x;   // citim x

                if ( x > 0 ) {  // daca x e pozitiv
                    toate_poz += 1; // variabila de lucru creste cu 1
                }
            }

            // afisam rezultat
            if ( toate_poz == n ) { // daca valoarea variabilei e egala cu n inseamna ca taote sunt pozitive 
                cout << "Toate numerele introduse sunt pozitive \n";
            } else {    // daca variabila nu e egala cu n, inseamna ca nu toate sunt pozitive
                cout << "Nu toate numerele introduse sunt pozitive \n";
            }
            break;
        }

        default: {
            cout << "Va rugam introduceti o optiune valida. \n";
        }
    }

    return 0;
}