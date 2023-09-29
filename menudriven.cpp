// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int choice;
//     int tcount=0, tcoffee=0, twater=0;
//     do{
//         cout<<"\n1.tea\n2.coffee\n3.water\0.exit";
//         cin>>choice;
//         switch (choice)
//         {
//         case 1: 
//              tcount++;
//             break;
//         case 2: 
//             cout<<"this is coffee"<<endl;
//             tcoffee++;
//             break;
//         case 3: 
//             cout<<" this is water"<<endl;
//             twater++;
//             break;
//         case 0: 
//             cout<<"thanks come for next time"<<endl;
//             break;
//         default:
//             cout<<"\n sorry check your option"<<endl;            
//             break;
//         }
//     }while(choice != 0);
//     cout<<tcount*10 + tcoffee * 40 + twater * 10<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     switch(n){
//         case 1: cout<<"monday"<<endl;
//         break;

//         default:
//           cout<<"not day selected"<<endl;
//           break;
//     }
// }







// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int f0=0, f1=1, fn;
//     for(int i=0; i<n;i++){
//         if(i<=1){
//             cout<<i<<" ";
//         }
//         fn = f0 + f1;
//         cout<<fn<< " ";
//         f0 = f1;
//         f1 = fn;
//     }
    
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int temp = n;
//     int sum=0;
//     int rem= 0;
//     while(n!=0){
//         rem = n % 10;
//         // sum += rem;
//         n  = n/ 10;
//               sum += rem*rem*rem;
//     }
//       if(sum == temp){
//             cout<<"armstrong"<<endl;
//         }
//         {
//             cout<<"not armstrong"<<endl;
//         }
//     // cout<<sum<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int revno = n;
//     int  rem  = 0, rev=0;
//     while(n!=0){
//        rem = n % 10;
//        n = n /10;
//        rev = rev * 10 + rem;
       
//     }
//     cout<<rev<<endl;
//     if(revno == rev){
//         cout<<"armstrng"<<endl;
//     }
//     else{
//         cout<<"not"<<endl;
//     }
//     // cout<<sum<<endl;
// }
