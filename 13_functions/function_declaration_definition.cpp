#include <iostream>
using namespace std;

int addition(int x, int y);  // function declaration

int main() {
    int value = addition(30, 50);   // argument
    cout << "Sum of both numbers: " << value << endl;
    return 0;
}

int addition(int x, int y) {   // function definition
    int result = x + y;
    return result;
}
