#include <iostream>
using namespace std;

int main() {
    int a = 10;  // stack

    int *p = &a;  // heap

    cout << *p << endl;
    return 0;
}
