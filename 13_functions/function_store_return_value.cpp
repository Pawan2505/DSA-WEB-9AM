#include <iostream>
using namespace std;

int addition() {
    int x = 12;
    int y = 15;
    int value = x + y;
    return value;
}

int main() {
    int result = addition();
    cout << "Result: " << result;
    return 0;
}
