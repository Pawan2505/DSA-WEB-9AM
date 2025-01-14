#include <iostream>
using namespace std;

class Employee {
public:
    void displayDetails() {
        cout << "Hello Class" << endl;
    }
};

int main() {
    // Employee emp;
    // emp.displayDetails();  // Ok

    displayDetails();   // Not Ok
    return 0;
}
