#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int marks;

    Student(int age, int marks) : age(age), marks(marks) {}

    virtual void study() = 0;  // pure virtual function

    void display() {
        cout << "This is an Abstract Class!" << endl;
    }
};

class Sejal : public Student {
public:
    Sejal(int age, int marks) : Student(age, marks) {}

    void study() override {
        cout << "Sejal Class..." << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Sejal sj(19, 100);
    sj.study(); 
    return 0;
}
