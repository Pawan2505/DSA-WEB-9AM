#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0;  // pure virtual function

    void display() {
        cout << "This is an Abstract Class!" << endl;
    }
};

class Sejal : public Student {
public:
    void study() override {
        cout << "Sejal Class..." << endl;
    }
};

int main() {
    Sejal sj;
    sj.study(); 
    return 0;
}
