// 10. Calculate H.C.F using while loop
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int rem;
    while(b!=0){
        rem = a % b;
        a = b;
        b = rem;
    }
    cout<<a<<endl;
}