// 11. Swap using third variable
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int c = a;
    a = b;
    b = c;
    c = a;
    cout<<a<<" "<<b<<" "<<endl;
}