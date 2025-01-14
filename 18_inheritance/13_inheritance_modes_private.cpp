// private to public, protected, private

#include <iostream>
using namespace std;

class Student {
private:
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
    v1.display();  // Derived class cannot access age directly

    // cout << "public way access age: " << v1.age << endl;  // Error: 'age' is private within this context

    return 0;
}
