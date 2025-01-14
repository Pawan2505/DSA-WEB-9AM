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

    void getdisplay() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.setValue("Pawan", 123, 1234);
    s1.getdisplay();

    return 0;
}
