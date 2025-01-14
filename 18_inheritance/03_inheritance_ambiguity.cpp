#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void behaviour() {
        cout << "I am in class A" << endl;
    }
};

// Base class B
class B {
public:
    void behaviour() {
        cout << "I am in class B" << endl;
    }
};

// Derived class C
class C : public A, public B {
    // C inherits from A and B
};

int main() {
    C c1;
    // c1.behaviour();  // Error: ambiguous call

    // Resolving ambiguity
    c1.A::behaviour();
    c1.B::behaviour();

    return 0;
}
