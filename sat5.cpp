// 5 Harshad Number:
#include <bits/stdc++.h>
using namespace std;

void harshad(int n){
    int rem=0, sum=0;
    while(n !=0){
        rem = n % 10;
        sum += rem;
        n = n /10;
    }
    if( n % sum == 0){
        cout<<"harshad"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    harshad(n);
    return 0;
}
