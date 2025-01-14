#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "a = " << a << endl;
    cout << "*ptr = " << *ptr << endl;
    return 0;
}
