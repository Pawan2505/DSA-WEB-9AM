#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Please enter your marks: ";  // print statement
    cin >> marks;  // taking input from user

    if(marks >= 90) {
        cout << "Grade A";
    } else {
        cout << "Sorry, You are not eligible";
    }

    return 0;
}
