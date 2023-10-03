#include <bits/stdc++.h>
using namespace std;

int main(){
     string name, data;
      cin>>name;
      ofstream outputFile(name + ".txt", ios::app);
       if (outputFile.is_open()) {
        // Append text to the file
      getline(cin, data);
      outputFile<<data;
       time_t now = time(0);
       string date_time = ctime(&now);
cout<<"last entry on"<<date_time<<endl;
cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
        outputFile.close();
        cout << "Text has been appended to the file." << endl;
    } else {
        cout << "Unable to open file for appending" << endl;
    }

}