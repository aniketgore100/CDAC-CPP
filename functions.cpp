#include <bits/stdc++.h>
using namespace std;
// pass by value 

// void welcome(string naam)//body--code
// {
// 	cout<<"\n1.Welcome to CDAC: "<<naam<<" address:"<<&naam;
// 	naam="DR."+naam;
// 	cout<<"\n2.Welcome to CDAC: "<<naam<<" address:"<<&naam;
// }

// // pass my reference
// void welcome2(string &naam)//body--code refence &
// {
// 	cout<<"\n1.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
// 	naam="DR."+naam;
// 	cout<<"\n2.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
// }
void sp(int &a){
    // a = a^b;
    // b = a^b;
    // a = a^b;
    // int sum  = a + b;
    int fact = 1;
    for(int i=1; i<=a; i++){
        fact *= i;
    }
    // cout<<"after swap in fuction"<<a <<" "<<b<<endl;
    cout<<fact<<endl;
}

int main()
{
    int a, b;
    // cin>>a>>b;
    cin>>a;
    sp(a);
    //  cout<<"after swap in fuction"<<a <<" "<<b<<endl;
}

