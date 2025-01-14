#include <iostream>
using namespace std;

class Student {
public:
    void students() {
        cout << "Student Class..." << endl;
    }
};

class Vishva {
public:
    void print() {
        cout << "Child class..." << endl;
    }
};

class Sejal : public Vishva, public Student {
public:
    void sejals() {
        cout << "Sejal Class.." << endl;
    }
};

int main() {
    Sejal sj;
    sj.sejals();
    sj.print();
    sj.students();
    return 0;
}
