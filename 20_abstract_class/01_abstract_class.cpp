#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0;  // pure virtual function

    void display() {
        cout << "This is an Abstract Class!" << endl;
    }
};

int main() {
    // Student s1;  // Error: cannot instantiate an abstract class
    return 0;
}
