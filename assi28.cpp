// 8. Search a number in an array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0, flag = 0;
    for(int i=0; i<n; i++){
      if(arr[i]==x){
        flag = 1;
      }
    }
    if(flag){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}