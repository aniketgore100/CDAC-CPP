// 4. Automorphic Number:
#include <bits/stdc++.h>
using namespace std;

void automorphic(int n){
    int square = n * n;
    while(n > 0){
        if(n % 10 != square % 10){
            cout << "no" << endl;
            return;  // Exit the function if not automorphic
        }
        n /= 10;
        square /= 10;
    }
    cout << "yes" << endl;
}

int main(){
    int n;
    cin >> n;
    automorphic(n);
    return 0;
}
