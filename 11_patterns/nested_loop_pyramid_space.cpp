#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int row = 1; row <= 4; row++) {
        // Space
        for (int space = 4; space > row; space--) {
            cout << " ";
        }
        // Star
        for (int col = 1; col <= 4; col++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
