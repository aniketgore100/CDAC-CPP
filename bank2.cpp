#include <iostream>
using namespace std;
//Bank System
class Account
{
  private:
  	string holder_name;
  	int acc_no;
  	float balance;
  	static int acc_generator;
  public:
	  void openaccount(string n,float a)
	  {
	   holder_name=n;
	   balance=a;
	   acc_no=++acc_generator;
	   cout<<"\nCongrats "<<holder_name<<" your account number:"<<acc_no;
	  }

      int getaccount(){
        return acc_no;
      }


	  void displayAccount()
	  {
	    cout<<"\nAccount number:"<<acc_no<<"\t Name:"<<holder_name<<"\t Balance"<<balance;
	  }
      void deposite(float depamount){
        balance += depamount;
        displayAccount();
      }


};
int Account::acc_generator=202300;
int main()
{
	Account obja[10];
	int ch,index=0,r,flag;
	float a;
	string n;
	do
	{
		cout<<"\n1.Register_Account\n2.Deposit\n3.Withdraw\n4.Check Balance\n0.Exit\n:";
		cin>>ch;
		switch(ch)
		{
			case 1:
					cout<<"\nEnter name and amount:\n";
					cin>>n>>a;
					while(a<3000)
					{
						cout<<"please enter amount 3000+:";
						cin>>a;
					}
					obja[index].openaccount(n,a);
					index++;
					obja[index-1].displayAccount();
            case 2:
                    float depamount;
                    cout<<"\n enter the amount of deposite"<<endl;
                    cin>>depamount;
                    obja[index].deposite(depamount);
                    break;
            default: 
                    cout<<"wrong choice"<<endl;
                    break;
        }
}