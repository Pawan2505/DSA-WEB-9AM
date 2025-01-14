#include <iostream>
using namespace std;

int addition(int x, int y) {   // parameter
    int result = x + y;
    return result;
}

int main() {
    int value = addition(30, 50);   // argument
    cout << "Sum of both numbers: " << value << endl;
    return 0;
}
