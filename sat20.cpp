// 20. Reverse an Array:
#include <bits/stdc++.h>
using namespace std;

void rev(int arr[] ,int s, int e){
    if(s >= e)
     return;
     int temp = arr[s];
     arr[s] = arr[e];
     arr[e] = temp;
     rev(arr, s+1, e-1);
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s = 0, e = n-1;
    rev(arr, s, e);
    printArr(arr, n);
}