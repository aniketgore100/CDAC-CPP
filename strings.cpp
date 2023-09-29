#include <bits/stdc++.h>
using namespace std;

int main(){
    // string str;
    // cin>>str;
    // int n = str.length();
    // int count = 0;
    // for(int i=0; i<n; i++){
    //     if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' ||
    //     str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' ||
    //     str[i]=='u' || str[i]=='U' ){
    //         count++;
    //     }
       
    // }

    string str;
    cin>>str;
    // getline(cin, str);
    int n = str.length();
    // string init = " "; 
    // init = str[0];
    // for(int i=1; i<n; i++){
    //    if(str[i]=' '){
    //     init = init +  str[i+1];
    //    }
    // }
    // string rev = "";
    //  for(int i=n-1; i>=0; i--){
    //   rev += str[i];
    // }
    int i=0, j=n-1, flag = 1;
    while( i<j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}