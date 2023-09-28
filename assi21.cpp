// 1. Find max & min array elements
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] > max){
                max = arr[i];
            }
            if(arr[j] < min){
                min = arr[j]; 
            }
        }
    }
    cout<<"maximum : "<<max<<" "<<"min"<<min<<endl;
}