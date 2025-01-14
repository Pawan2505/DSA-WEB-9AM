#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee emp;  // create object -> memory allocated to data member

    emp.name = "Pawan";  // Error: 'name' is private within this context
    emp.age = 24;        // Error: 'age' is private within this context

    emp.displayDetails();  // Error: 'displayDetails' is private within this context

    return 0;
}
