// //  Find total marks & percentage
// #include <iostream>
// using namespace std;

// int main() {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     int total_marks;
//     float percentage;
//     if(a <=100 && b <= 100 && c<=100 && d <= 100){
//         total_marks = a+b+c+d;
//         percentage = (total_marks * 100) / 400;
//     }    
// // cout<< total_marks <<endl;
//     cout<<percentage<<endl;   
// }

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total_marks, percentage;

    if (a <= 100 && b <= 100 && c <= 100 && d <= 100) {
        total_marks = a + b + c + d;
        percentage = (total_marks * 100) / 400; 
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    } else {
        cout << "Invalid input! Marks should be less than or equal to 100." << endl;
    }

    return 0;
}
