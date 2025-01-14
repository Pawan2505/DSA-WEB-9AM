#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Please enter your name: ";
    // cin >> str;   // It does not take space inside of string

    getline(cin, str);  // Takes the entire line including spaces

    cout << str;
    return 0;
}
