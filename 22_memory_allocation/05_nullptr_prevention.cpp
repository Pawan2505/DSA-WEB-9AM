#include <iostream>
using namespace std;

int main() {
    int *p = new int;  // heap -> allocate memory

    *p = 10;
    cout << *p << endl;

    delete p;  // Deallocate memory

    p = nullptr;  // nullptr prevents from dangling pointer

    p = new int[5];

    p[0] = 11;
    p[1] = 12;
    p[2] = 13;
    p[3] = 14;
    p[4] = 15;

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << endl;
    }

    delete[] p;  // Deallocate memory

    return 0;
}
