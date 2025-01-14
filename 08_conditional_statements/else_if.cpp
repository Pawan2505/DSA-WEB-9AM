#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Please enter your marks: ";  // print statement
    cin >> marks;  // taking input from user

    if((marks > 90) && (marks <= 100)) {
        cout << "Grade A";
    }
    else if((marks > 80) && (marks <= 90)) {
        cout << "Grade B";
    }
    else if((marks > 70) && (marks <= 80)) {
        cout << "Grade C";
    } else {
        cout << "Sorry, You are not eligible!";
    }

    return 0;
}
