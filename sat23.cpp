// 23. Rotation of Elements of an Array (Left and Right):
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0; i<n ;i++){
        if(i < k){
            cout<<arr[n+i-k]<<" ";
        }else{
            cout<<arr[i-k]<<" ";
        }
    }
}