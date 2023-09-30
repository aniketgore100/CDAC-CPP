// 14. Replace All 0's with 1 in a Given Integer:

#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cin>>num;
    string str = to_string(num);
    int n = str.length();
    for(int i= 0; i<n; i++){
        if(str[i]=='0'){
            str[i] = '1';
        }
    }
    int res = stoi(str);
    cout<<res<<endl;
}