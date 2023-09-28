// 
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;  i<n; i++){
        cin>>arr[i];
    }
    // map<int, int>mp;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    //     mp[arr[i]]++;
    // }
    // for(auto x : mp){
    //     cout<<x.first<<":"<<x.second<<endl;
    // }
    int arr2[n];
    int count = 1;
    for(int i=0; i<n; i++){
        sort(arr, arr+n);
    }
    for(int i = 0; i<n; i++){
        if(arr[i] == arr[i+1]){
        count++;
        } else{
        arr2[i] = count;
        count = 1;
    }
    }
    
    arr2[n-1] = count;
    for(int i=0; i<n; i++){
        cout<<arr2[i];
    }
    return 0;
}