#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int row = 1; row <= 4; row++) {
        if (row == 1 || row == 4) {
            for (int col = 1; col <= 3; col++) {
                cout << "3 ";
            }
            cout << endl;
        }
        if (row == 2) {
            cout << "3 1 3" << endl;
        }
        if (row == 3) {
            cout << "3 2 3" << endl;
        }
    }
    return 0;
}
