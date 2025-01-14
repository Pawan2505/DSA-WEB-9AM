#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int age;

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee emp;  // create object -> memory allocated to data member
    emp.name = "Pawan";
    emp.age = 24;

    emp.displayDetails();
    return 0;
}
