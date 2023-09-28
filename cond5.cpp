// 5. Enter three angles & check if it is a triangle
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180){
        cout<<"it is triangle"<<endl;
    }
    else{
        cout<<"it is not triangle"<<endl;
    }
}