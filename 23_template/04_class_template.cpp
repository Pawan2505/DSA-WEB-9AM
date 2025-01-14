#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Student {
public:
    T1 age;
    T2 marks;

    Student(T1 age, T2 marks) {
        this->age = age;
        this->marks = marks;
    }

    void display() {
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student<int, int> s1(20, 58);
    s1.display();
    return 0;
}
