#include <iostream>
using namespace std;

class Student {
public:
    int *age;
    int marks;

    // Constructor
    Student(int age1, int marks) {
        age = new int;   // Allocated memory
        *age = age1;     // initialization
        this->marks = marks;
    }

    // Deep Copy Constructor
    Student(const Student &other) {
        age = new int;
        *age = *other.age;
        marks = other.marks;
    }

    void display() {
        cout << "Age: " << *age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(24, 100);   // constructor
    s1.display();

    // Using deep copy constructor
    Student s2 = s1;
    s2.display();

    // Changing value in s1
    *s1.age = 30;

    cout << "After modifying s1's age:" << endl;
    s1.display();
    s2.display();

    return 0;
}
