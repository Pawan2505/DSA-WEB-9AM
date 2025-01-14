#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int &ref = a;

    cout << "Value of a: " << a << endl;
    cout << "Value of ref: " << ref << endl;

    cout << "Address of a: " << &a << endl;
    cout << "Address of ref: " << &ref << endl;

    return 0;
}
