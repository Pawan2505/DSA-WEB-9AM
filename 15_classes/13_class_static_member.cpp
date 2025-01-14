#include <iostream>
using namespace std;

class Student {
public:
    static int age;

    static void display() {
        cout << "Age: " << age << endl;
    }
};

int Student::age = 24;

int main() {
    Student::display();
    return 0;
}
