#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    int marks;

    Student() {
        name = "";
        rollno = 0;
        marks = 0;
    }

    Student(string name, int rollno, int marks) {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2("Pawan", 123, 12345);

    s1.display();
    s2.display();

    cout << "Class Size: " << sizeof(Student) << endl;
    cout << "String Size: " << sizeof(string) << endl;

    return 0;
}
