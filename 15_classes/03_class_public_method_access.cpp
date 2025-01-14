#include <iostream>
using namespace std;

class Employee {
public:
    void displayDetails() {
        cout << "Hello Class" << endl;
    }
};

int main() {
    Employee emp;
    emp.displayDetails();  // Correct usage
    return 0;
}
