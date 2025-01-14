#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Parent Behaviour..." << endl;
    }
};

class Child : public Base {
    // Child inherits from Base
};

int main() {
    Child ch;
    ch.display();
    return 0;
}
