#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Parent Behaviour..." << endl;
    }
};

class Child : public Base {
public:
    void display() {
        cout << "Child Behaviour..." << endl;
    }
};

int main() {
    Child ch;
    ch.display();
    return 0;
}
