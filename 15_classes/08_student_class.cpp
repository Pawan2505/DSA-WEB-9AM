#include <iostream>
using namespace std;

class Student {
    // Data Member / Properties
public:
    string name;
    int rollno;
    int marks;

    Student() {
        name = "";
        rollno = 0;
        marks = 0;
    }

    Student(string nam, int roll, int mark) {
        name = nam;
        rollno = roll;
        marks = mark;
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
    return 0;
}
