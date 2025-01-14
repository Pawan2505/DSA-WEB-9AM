#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int row = 1; row <= 4; row++) {
        // Star
        for (int star = 1; star <= row; star++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
