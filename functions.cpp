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
void sp(int &a, int &b){
    // a = a^b;
    // b = a^b;
    // a = a^b;
    swap(a, b);
    cout<<"after swap in fuction"<<a <<" "<<b<<endl;
}

int main()
{
    int a, b;
    cin>>a>>b;
    sp(a,b);
     cout<<"after swap in fuction"<<a <<" "<<b<<endl;
}

