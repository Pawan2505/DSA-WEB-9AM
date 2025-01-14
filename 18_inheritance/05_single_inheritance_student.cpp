#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int marks;

    Student(int age, int marks) {
        this->age = age;
        this->marks = marks;
    }
};

class Vishva : public Student {
public:
    Vishva(int age, int marks) : Student(age, marks) {}

    void print() {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Vishva v1(24, 100);
    v1.print();
    return 0;
}
