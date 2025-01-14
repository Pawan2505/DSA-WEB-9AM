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

    int getMarks() {
        return marks;
    }
};

int main() {
    Student s1;
    s1.setValue("Pawan", 123, 1234);
    s1.getDisplay();

    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}
