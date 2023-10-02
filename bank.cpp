#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Bank {
private:
   

public:
    Bank() : flag(0), updated_amount(0) {}
    string name;
    float amount;
    static int ACN;

    void setValues(string name, float amount) {
        this->name = name;
        this->ACN = ACN;
        ACN++;
        if (amount > 3000) {
            this->amount = amount;
        }
    }

    string getname() const {  
        return name;
    }

    float getamount() const {
        return amount;
    }

    int flag;
    int updated_amount;
    int flag2 = 0;
    int withamount = 0;
    
    void updated(float amt) {
        updated_amount = amt;
        amount = updated_amount;
        flag = 1;
    }

    void withupdate(float x) {
        withamount = x;
        flag2 = 1;
        amount = withamount;
    }
    void display() {
        cout << setw(40) << "--Congratulations " << name << " your account is created successfully--" << endl;
        cout << setw(40) << "Account Holder: " << name << endl;
        cout << setw(40) << "Account Number: " << ACN << endl;
        if (flag) {
            cout << setw(40) << "Amount after the deposit: " << updated_amount<< endl;
            flag = 0;
        }
        if (flag2) {
            cout << setw(40) << "Amount after withdrawal: " << withamount << endl;
            flag2 = 0;
        } else {
            cout << setw(40) << "Total balance: " << amount << endl;
        }
    }
};

int Bank::ACN = 345609000;

void createAccount(Bank &b) {
    string name;
    cout << "Enter Name: ";
    cin >> name;
    float amount;
    cout << "Please Enter an amount. *Note: Amount should be greater than 3000: ";
    cin >> amount;
    b.setValues(name, amount);
    cout << endl;
    b.display();
}

void deposite(Bank &b) {
    float amt = b.getamount();
    int accnum;
    cout<<"Enter account number to withdraw amount"<<endl;
    cin>>accnum;
    float deposite;
    cout << "Enter an amount to deposit: ";
    cin>>deposite;
    if((accnum == b.ACN) && (deposite > 0)){
    amt = amt + deposite;
    b.updated(amt);
    b.display();
    }
    else{
        cout<<"Invalid Account"<<endl;
        exit(1);
    }
}

void withdraw(Bank &b) {
    int accnum;
    cout<<"Enter account number to withdraw amount"<<endl;
    cin>>accnum;
    if(accnum == b.ACN){
    float withdraw;
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;
    float ans = b.getamount() - withdraw;
    b.withupdate(ans);
    b.display();
    }else{
        cout<<"invalid account"<<endl;
         exit(1); //
    }
}

void balance(Bank &b) {
    int accnum;
    cout<<"Enter account number to check balance"<<endl;
    cin>>accnum;
    if(accnum == b.ACN){
    float amt = b.getamount();
    cout << "Current balance: " << amt << endl;
    }else{
          cout<<"invalid account"<<endl;
           exit(1); //
    }

}

void BankMenu() {
    Bank account;
    int option;

    do {
        cout << endl << setw(40) << "Bank Menu" << endl;
        cout << setw(40) << "1. Create Account" << endl;
        cout << setw(40) << "2. Withdraw" << endl;
        cout << setw(40) << "3. Deposit" << endl;
        cout << setw(40) << "4. Check Balance" << endl;
        cout << setw(40) << "0. Exit" << endl;
        cout << setw(40) << "Choose an option: ";
        cin >> option;

        switch (option) {
       
        case 1:
            createAccount(account);
            break;

        case 2:
              withdraw(account);
       
        break;

        case 3:
            deposite(account);
            break;

        case 4:
            balance(account);
            break;
  
        case 0:
            cout << "Exiting the menu" << endl;
            break;

        default:
            cout << "Invalid option. Please choose again." << endl;
        }
    } while (option != 0);
}


int main() {
    BankMenu();
    return 0;
}
