// 30. Checking for Perfect Square:
#include <bits/stdc++.h>
using namespace std;

int square(int n){
    int persq = sqrt(n);
    if(n == persq*persq){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    square(n);
}