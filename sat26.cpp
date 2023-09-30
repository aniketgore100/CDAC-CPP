//26. Patterns:
#include <iostream>
using namespace std;

int main() {
    int i, j, inc = 0;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            cout << ++inc << "\t";
        }
        cout << endl;
    }
cout<<endl;
    // -------------------------------------
    int x, y, dec = 10; 
    for (x = 4; x >= 1; x--) { 
        for (y = 1; y <= x; y++) {
            cout << dec-- << "\t";
        }
        cout << endl;
    }
    cout<<endl;
    // --------------------------------------
    int a, b, dec2 = 6;
    for (a = 4; a >= 1; a--) { 
        for (b = 1; b <= a; b++) {
            cout << dec2 << "\t";
        }
        dec2--; 
        cout << endl;
    }

    return 0;
}
