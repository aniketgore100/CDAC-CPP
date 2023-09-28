// 6. Find total marks & percentage
#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int tlm, per;

    if (a <= 100 && b <= 100 && c <= 100 && d <= 100) {
        tlm = a + b + c + d;
        per = (tlm * 100) / 400; 
        cout << "Total Marks:" <<" "<< tlm << endl;
        cout << "Percentage:" << per<< endl;
    } else {
        cout << "invalid marks" << endl;
    }

    return 0;
}