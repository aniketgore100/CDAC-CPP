
// 17. Counting Number of Days in a Given Month of a Year:
#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    string str;
    cin>>str;
    char strarr[12][20] = {"jan", "feb", "march", "april", "may", "june", "july", "aug",
    "sep", "oct", "nov", "dec"
    };
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month = 0;
      if(((year % 4 == 0 && year%100!=0) || year % 400 == 0) && str == "feb"){
        cout<<"29"<<endl;
    }   
    else{
    for(int i=0; i<12; i++){
      if(strarr[i]==str){
        month = i;
      }
    }
    cout<<arr[month]<<endl;
    }
}