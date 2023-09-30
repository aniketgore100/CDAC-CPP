// 15. Calculate the Number of Digits in an Integer:
#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cin>>num;
    int count = 0;
    while(num !=0){
        int rem = num % 10;
        count++;
        num = num /10;
    }
    cout<<count<<endl;
}