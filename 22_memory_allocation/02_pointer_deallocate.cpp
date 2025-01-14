#include <iostream>
using namespace std;

int main() {
    int a = 10;  // stack

    int *p = &a;  // heap -> allocate memory

    cout << *p << endl;

    delete p;  // Deallocate memory

    cout << *p << endl;
    return 0;
}
