#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;

public:
    Employee() {
        cout << "Constructor called...";
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee emp;  // create object -> memory allocated to data member
    return 0;
}
