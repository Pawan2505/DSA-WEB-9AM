#include <iostream>
using namespace std;

int main() {
    int array[10];

    cout << "Array: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Please enter value at " << i << " index: ";
        cin >> array[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << "Array value at " << i << " Index: " << array[i] << endl;
    }

    return 0;
}
