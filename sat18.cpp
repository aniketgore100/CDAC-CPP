
// 18. Finding Number of Times 'x' Digit Occurs in a Given Input:
#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, x;
   cin>>n>>x;
   int count = 0;
   while(n !=0 ){
    int rem = n % 10;
    if(rem == x){
        count++;
    }
    n = n / 10;
   }
   cout<<count<<endl;
}