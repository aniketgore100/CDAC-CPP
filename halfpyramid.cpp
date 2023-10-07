// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   // }
//   for(int i = 1; i<=n; i++){
//     for(int k = 1; k<=n-i; k++){
//       cout<<" ";
//     }
//     for(int j = 1; j<=2*i-1; j++){
//         if (j == 1 || j == 2 * i - 1 || i == n) {
//                cout << "*";
//             } else {
//               cout << " ";
//             }
//     }
    
//     cout<<endl;
//   }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i = 1; i<=n; i++){
    for(int k = 1; k <= n-i; k++){
      cout<<" ";
    }
    for(int j = 1; j<=2*i-1; j++){
      if(j==2 || j==2*i-1 || i == n || j == i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }


  for(int i = n-1; i>=1; i--){
    for(int k = 1; k <= n-i; k++){
      cout<<" ";
    }
    for(int j = 1; j<=2*i-1; j++){
      if(j==2 || j==2*i-1 || i == n || j == i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}

//      0
//     00
//    000
//   0000
//  00000
// 000000



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if((i==1) || (j == 1) || (i+j == n+1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   char c = 'a';
//    for(char i = 1; i<=n; i++){
//     for(char j = 1; j<=i; j++){
//       cout<<c++;
//     }
//     cout<<endl;
//    }
// }


// #include <bits/stdc++.h>
// using namespace std;

// class electronics{
//   public:
//    string model, company;
//    double price;
//    electronics(string model, string company, double price){
//     this->model = model;
//     this->company = company;
//     this->price  = price;
//    }
//    virtual void display(){
//     cout<<model<<endl;
//     cout<<company<<endl;
//     cout<<price<<endl;
//    }

// };

// class mobile:public electronics{
//   public:
//   int ram, storage;
//   public:
//   mobile(string model, string company, double price, int ram, int storage):electronics(model, company, price){
//     this->storage = storage;
//     this->ram = ram;
//   }
//      void dislpay(){
//        electronics::display();
//        cout<<ram<<endl;
//       cout<<storage<<endl;
//      }
   
// };



// class refrigetor:public electronics{

//   float rating;
//   float capacity;
//   public:
//   refrigetor(string model, string company, double price, float rating,   float capacity):electronics(model, company, price){
//     this->rating = rating;
//     this->capacity = capacity;
//   }
//   void display(){
//     electronics :: display();
//     cout<<rating<<endl;
//     cout<<capacity<<endl;
//   }

// };

// int main(){


//   // electronics e("CPH", "oneplus", 30000);
//   // // mobile m ("CPH", "oneplus", 30000, 12, 128);
//   // // e.display();
//   // refrigetor r("w12", "LG", 233000, 4.5, 100);
//   // r.display();
//   // m.dislpay();

//   vector<electronics*>v;

//    while(true){
//     int choice;
//     cin>>choice;
//     switch(choice){
//       case 1:
//       string model,  company;
//       double price;
//       int ram,  storage;
//       std::cout << "Enter Mobile Model: ";
//                 std::cin >> model;
//                 std::cout << "Enter Company: ";
//                 std::cin >> company;
//                 std::cout << "Enter Price: ";
//                 std::cin >> price;
//                 std::cout << "Enter RAM (in GB): ";
//                 std::cin >> ram;
//                 std::cout << "Enter Storage (in GB): ";
//                 std::cin >> storage;
//                 v.push_back(new mobile(model, company, price, ram, storage));
//                 break;

//       case 2:
     
//     }
//    }

// }