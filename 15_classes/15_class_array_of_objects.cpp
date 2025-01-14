#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    int marks;

public:
    void setValue(string name, int rollno, int marks) {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }

    void getDisplay() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1[3];

    s1[0].setValue("Pawan", 12, 100);
    s1[0].getDisplay();
    s1[1].setValue("Vishwa", 122, 100);
    s1[1].getDisplay();
    s1[2].setValue("Priyanshi", 125, 100);
    s1[2].getDisplay();

    return 0;
}
