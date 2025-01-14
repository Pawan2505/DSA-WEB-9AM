#include <iostream>
using namespace std;

class Student {
public:
    int *p;

    Student(int a) {
        p = new int;  // Allocated memory
        cout << "Allocated Memory!" << endl;
        *p = a;
    }

    ~Student() {
        delete p;  // Deallocated memory
        cout << "Deallocated Memory!" << endl;
    }

    void display() {
        cout << *p << endl;
    }
};

int main() {
    Student s1(10);
    s1.display();

    // Alternatively, using dynamic allocation
    Student *s1 = new Student(10);
    s1->display();
    delete s1;

    return 0;
}
