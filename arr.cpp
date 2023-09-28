
// block size depends on data type of arr 
#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0; i<n; i++)
int main(){
    int n;
    cin>>n;
    int arr[n];
    loop(i,n){
        cin>>arr[i];
    }
    // sort(arr, arr+n);
    // cout<< arr[0];

    
   int temp;
   for(int i=0; i<n-1; i++){
    for(int j = 0; j<n-1; j++){
        if(arr[j] > arr[j+1]){
            // temp = arr[j];
            // arr[j] = arr[j+1];
            // arr[j+1] = temp;
            swap(arr[j], arr[j+1]);
        }
    }
   }
   loop(i,n){
    cout<<arr[i]<<endl;
   }


    // int avg = 0;
    // loop(i,n){
    // avg = avg + arr[i];
    //  }
    //     avg = avg/n;
    // loop(i,n){
    //    if(arr[i] >= avg){
    //     cout<<arr[i]<<endl;
    //    }
    // }

    // 
    return 0;
}