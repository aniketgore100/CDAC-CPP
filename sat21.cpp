// 21. Removing Duplicate Elements from an Array:
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
   for(auto i : mp){
    cout<<i.first<<" ";
   }
}