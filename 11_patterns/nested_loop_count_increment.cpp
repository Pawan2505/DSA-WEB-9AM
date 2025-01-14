#include <iostream>
using namespace std;

int main() {
    // Outer loop
    int count = 1;

    for (int row = 1; row <= 4; row++) {
        // Inner Loop
        for (int col = 1; col <= row; col++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
