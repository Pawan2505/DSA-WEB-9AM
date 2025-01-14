#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Hello Students ..." << endl;
    }

    int display(string name) {
        cout << "Hello Students ..." << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Pawan";
    s1.display();

    return 0;
}
