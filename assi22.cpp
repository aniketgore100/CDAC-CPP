// 2. Count frequency of each element
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;  i<n; i++){
        cin>>arr[i];
    }
    int ma = 0;
    for(int i=0;  i<n; i++){
        ma  = max(ma, arr[i]);
    }
    int freq[ma+1] = {0};
    for(int i=0;  i<n; i++){
       freq[arr[i]]++;
    }
     for(int i=0;  i<n; i++){
       cout<<i<<": "<<freq[i]<<endl;
    }
    return 0;
}