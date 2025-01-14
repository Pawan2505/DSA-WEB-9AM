#include <iostream>
using namespace std;

int main() {
    int *p = new int;  // heap -> allocate memory

    *p = 10;
    cout << *p << endl;

    delete p;  // Deallocate memory

    cout << *p << endl;
    return 0;
}
