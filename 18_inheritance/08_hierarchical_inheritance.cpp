#include <iostream>
using namespace std;

class Student {
public:
    void students() {
        cout << "Student Class..." << endl;
    }
};

class Vishva : public Student {
public:
    void print() {
        cout << "Child class..." << endl;
    }
};

class Sejal : public Student {
public:
    void sejals() {
        cout << "Sejal Class.." << endl;
    }
};

int main() {
    Vishva v1;
    v1.students();

    Sejal s1;
    s1.students();

    return 0;
}
