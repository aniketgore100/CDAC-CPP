#include <bits/stdc++.h>
using namespace std;

int main(){
     string name, data;
      cin>>name;
      cin.ignore(); 
       ofstream outputFile(name + ".txt", ios::app);
        // Append text to the file
      getline(cin, data);
      outputFile<<data;
       time_t now = time(0);
       string date_time = ctime(&now);
      outputFile <<"last entry on"<<date_time<<endl;
     outputFile <<"----------------------------------------------------------------------------------------------------"<<endl;
     outputFile.close();

}

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     string name, data;
//     cin >> name;
//     cin.ignore();  // Add this line to clear the input buffer
//     ofstream outputFile(name + ".txt", ios::app);

//     // Append text to the file
//     getline(cin, data);
//     outputFile << data;

//     time_t now = time(0);
//     string date_time = ctime(&now);
//     cout << "last entry on " << date_time << endl;
//     cout << "-----------------------------------------------------------------------------------------------------" << endl;
//     outputFile.close();

//     return 0;
// }
