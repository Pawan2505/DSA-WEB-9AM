#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float salary;

    Student() {
        id = 12;
        name = "Pawan";
        salary = 12345;
    }

    Student(int id, string name, float salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2(1, "Rahul", 1222);
    s2.display();

    Student s3(2, "Ram", 999.58);
    s3.display();

    return 0;
}
