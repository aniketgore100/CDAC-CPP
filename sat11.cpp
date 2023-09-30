//11. Binary to Decimal Conversion:
#include <bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int ans = 0, i = 0;
   while(n !=0 ){
      int dig = n % 10;
      ans = (dig * pow(2, i)) + ans;
      n = n / 10;
      i++;
   }
   cout<<ans<<endl;
}