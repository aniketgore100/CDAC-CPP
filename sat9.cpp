// 9. Lowest Common Multiple (LCM):

#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    // if(a==0)
    //  return b;
    // else 
    //  return gcd(a % b, a);
    return (a*b) / __gcd(a,b);
}


int main(){
   int a, b;
   cin>>a>>b;
   cout<<"lcm is :  " << lcm(a, b)<<endl;
}