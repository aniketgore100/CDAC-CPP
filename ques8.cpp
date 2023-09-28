// 8. Add two digits of a number
#include <bits/stdc++.h>
using namespace std;

int main(){
    int dig1;
    cin>>dig1;
    int rem =  (dig1 % 10);
    dig1 = dig1 / 10;
    rem = rem + (dig1 % 10);
    cout<<rem<<endl;
}