// 22. Removing Duplicate Elements from an Array:
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    int x;
    cin>>x;
   for(int i=0; i<n; i++){
    for(int j = 0; j<m; j++){
        cin>>arr[i][j];
    }
   }
   int flag = 0;
   for(int i=0; i<n; i++){
    for(int j = 0; j<m; j++){
        if(arr[i][j]==x){
           flag = 1;
           break;
        }
    }
   }
   if(flag) cout<<"found"<<endl;
   else cout <<"not found"<<endl;
   
}