#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

class Vatsal : private Student {
public:
    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Vatsal v1;
    v1.display();  // Derive class can access the age

    // cout << "public way access age: " << v1.age << endl;  // Error: 'age' is private within this context

    return 0;
}
