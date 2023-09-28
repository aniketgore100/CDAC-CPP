#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int po[n], ng[n], zero[n];
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            po[i] = arr[i];
        }
        if(arr[i]>0){
            ng[i] = arr[i];
        }      
        else{
            zero[i] = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        cout<<"possitive : "<<po[i]<<"negative : "<<ng[i]<<"zeros : "<<zero[i]<<endl;
    }
}