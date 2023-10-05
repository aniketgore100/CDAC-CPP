#include <bits/stdc++.h>

using namespace std;

int main() {
    int choice;
    cout <<"1. Read myUpdate"<< endl;
    cout <<"2. Write your thought"<< endl;
    cin >> choice;

    switch(choice){
        case 1: {
            string filename;
            cout << "Enter filename: ";
            cin >> filename;
            ifstream file(filename);
            
            if (!file.is_open()) {
                ofstream newFile(filename);
                
                if (!newFile.is_open()) {
                    cout << "Unable to create or open the file" << endl;
                    return 1;
                }
                
                newFile.close();
                file.open(filename);
                
                if (!file.is_open()) {
                    cout << "Unable to open the file" << endl;
                    return 1;
                }
            }
            
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
            break;
        }
        case 2: {
            string name;
            cout << "Enter filename: ";
            cin >> name;
            ofstream file(name, ios::app);
            
            if (!file.is_open()) {
                cout << "Unable to open the file" << endl;
                return 1;
            }
            
            cout << "Enter EXIT_NOW:" << endl;
             time_t now = time(0);
             string date_time = ctime(&now);
            string line;
            while (true) {
                getline(cin, line);
                
                if (line == "EXIT_NOW") {
                    break;
                }
                file << line<< endl;
            }
            file<<date_time<<endl;
            file.close();
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
