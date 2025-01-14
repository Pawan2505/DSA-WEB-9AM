#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int marks;

    // Constructor
    Student(int age, int marks) {
        this->age = age;
        this->marks = marks;
    }

    // Copy Constructor
    Student(const Student &other) {
        this->age = other.age;
        this->marks = other.marks;
    }

    void display() {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(24, 99);   // constructor
    Student s2 = s1;      // Call copy constructor => shallow copy

    s2.display();
    return 0;
}
