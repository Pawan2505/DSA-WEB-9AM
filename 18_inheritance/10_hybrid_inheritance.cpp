#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void behaviour() {
        cout << "I am in class A" << endl;
    }
};

class B : virtual public A {
public:
    void behaviour() {
        cout << "I am in class B" << endl;
    }
};

class C : virtual public A {
public:
    void behaviour() {
        cout << "I am in class C" << endl;
    }
};

class D : public B, public C {
public:
    void behaviour() {
        cout << "I am in class D" << endl;
    }
};

int main() {
    D d1;

    d1.behaviour();
    d1.B::behaviour();
    d1.C::behaviour();

    return 0;
}
