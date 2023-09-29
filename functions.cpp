#include <bits/stdc++.h>
using namespace std;
// pass by value 

void welcome(string naam)//body--code
{
	cout<<"\n1.Welcome to CDAC: "<<naam<<" address:"<<&naam;
	naam="DR."+naam;
	cout<<"\n2.Welcome to CDAC: "<<naam<<" address:"<<&naam;
}

// pass my reference
void welcome2(string &naam)//body--code refence &
{
	cout<<"\n1.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
	naam="DR."+naam;
	cout<<"\n2.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
}

int main()
{
	cout<<"Enter your name:";
	string name;
	cin>>name;
	welcome(name);
    welcome2(name);
    cout<<"\n:After call"<<name<<" address:"<<&name;
}

