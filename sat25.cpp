// 25. Remove Spaces from a String:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int n = str.length();
    string final = "";
    for(int i = 0; i<n ; i++){
        if(str[i] != ' '){
            final += str[i];
        }
    }
    cout<<final<<endl;
}