#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Parameterless Hello Students ..." << endl;
    }

    void display(string name) {
        this->name = name;
        cout << "Parameterized Hello Students ... " << name << endl;
    }
};

int main() {
    Student s1;

    s1.display();
    s1.display("Pawan");

    return 0;
}
