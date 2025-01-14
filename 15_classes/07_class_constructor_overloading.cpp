#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int salary;

public:
    Employee() {
        this->name = "Sejal";
        this->age = 16;
        this->salary = 2000000;
    }

    Employee(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Employee(string name, int age, int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee em;
    em.displayDetails();
    Employee emp("Pawan", 24);  // create object -> memory allocated to data member
    emp.displayDetails();
    return 0;
}
