//24. Remove the Vowels from a String:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string final = ""; // Initialize an empty string to store characters without vowels

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];

        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            final += c; // Append the character to the 'final' string if it's not a vowel
        }
    }

    cout << final << endl; // Print the 'final' string without vowels
    return 0;
}
