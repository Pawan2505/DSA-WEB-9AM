#include <iostream>
using namespace std;

int main() {
    // Outer loop
    int count = 10;

    for (int row = 4; row >= 1; row--) {
        // Inner Loop
        for (int col = 1; col <= row; col++) {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
    return 0;
}
