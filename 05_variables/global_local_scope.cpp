#include <iostream>
using namespace std;

int number = 30; // global variable

int main() {
    int number = 10;  // local variable
    cout << number << endl;

    {  // block of scope
        int number = 20;   // local variable
        cout << "Output 1 = " << number << endl;
    }

    cout << "Global Variable = " << ::number << endl;
    return 0;
}
