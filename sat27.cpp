// 27. Counting Upper and Lower Case Letters:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int n = str.length();
    int upc = 0, lwc = 0;
    for(int i=0; i<n; i++){
        if(str[i] >='a' && str[i] <= 'z'){
            lwc++;
        }
        else{
            upc++;
        }
    }
    cout<<upc<<" "<<lwc<<endl;
}