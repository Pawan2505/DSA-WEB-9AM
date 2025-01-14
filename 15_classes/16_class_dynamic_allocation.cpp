#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    int marks;

public:
    void getDisplay() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student *s1 = new Student();  // object created

    s1->name = "Pawan";  // ok
    s1->rollno = 12;     // ok
    s1->marks = 99;      // ok

    s1->getDisplay();    // ok

    delete s1;  // Clean up dynamically allocated memory
    return 0;
}
