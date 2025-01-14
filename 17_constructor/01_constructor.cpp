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

 

    void display() {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(24, 99);   // constructor


    s1.display();
    return 0;
}
