//7. Check for leap year
#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    if((year % 4==0 && year % 400) || (year != 0)){
        cout<<"leap year "<<endl;
    }
    cout<<"not leap year"<<endl;
}