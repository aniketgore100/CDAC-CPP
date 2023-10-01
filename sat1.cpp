// 1. Strong Number
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0)
     return 1;
    else
     return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    int temp = n;
    
    int sum = 0;
    while(n!=0){
        int rem = n % 10;
        sum = sum +  fact(rem);
        n = n/10;
    }
    cout<<sum<<endl;
    if(sum == temp){
        cout<<"strong number "<<endl;
    }
    else{
        cout<<"not a strong number"<<endl;
    }
}