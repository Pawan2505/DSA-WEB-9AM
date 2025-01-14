// protected to public, protected, private

#include <iostream>
using namespace std;

class Student {
protected:
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
    v1.display();  // Derived class can access age

    // cout << "public way access age: " << v1.age << endl;  // Error: 'age' is protected within this context

    return 0;
}
