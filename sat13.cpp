// 13. Quadrants in Which a Given Coordinate Lies:
#include <bits/stdc++.h>
using namespace std;


int main(){
  int a,b;
  cin>>a>>b;
  if(a > 0 && b > 0){
    cout<<"first I"<<endl;
  }
   if(a < 0 && b > 0){
    cout<<"second II"<<endl;
  }
   if(a < 0 && b < 0){
    cout<<"third III"<<endl;
  }
   if(a > 0 && b < 0){
    cout<<"fourth IV"<<endl;
  }
  if(a == 0 && b==0){
    cout<<"origin"<<endl;
  }
  return 0;

}