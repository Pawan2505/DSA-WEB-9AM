#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    // Both value will be same
    cout << "a = " << a << endl;
    cout << "*ptr = " << *ptr << endl;

    // Both variable address will be same
    cout << "Address of a: " << &a << endl;
    cout << "Address of ptr: " << ptr << endl;

    *ptr = 100;

    cout << "Updated Value: " << endl;

    // Both value will be same
    cout << "a = " << a << endl;
    cout << "*ptr = " << *ptr << endl;

    // Both variable address will be same
    cout << "Address of a: " << &a << endl;
    cout << "Address of ptr: " << ptr << endl;

    return 0;
}
