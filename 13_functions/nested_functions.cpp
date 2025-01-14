#include <iostream>
using namespace std;

// Outer Function
int operation() {
    int x = 10;
    int y = 20;

    // Inner function
    auto addition = [=]() {
        int result = x + y;
        cout << "Result: " << result << endl;
    };

    addition();
}

int main() {
    operation();
    return 0;
}
