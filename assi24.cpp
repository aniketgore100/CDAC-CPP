// 4. Reverse the array elements
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        arr2[n-1-i] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}