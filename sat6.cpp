// 6. Abundant Number:
#include <bits/stdc++.h>
using namespace std;

void perfect(int n){
  int sum = 0;
  for(int i=1; i<n; i++){
    if(n % i == 0){
        sum += i;
    }
  }
  if(n < sum ){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"no"<<endl;
  }
}

int main(){
    int n;
    cin>>n;
    perfect(n);
}