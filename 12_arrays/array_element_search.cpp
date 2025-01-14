#include <iostream>
using namespace std;

int main() {
    int array[10];
    int findout = 99;
    bool ispresent = false;

    cout << "Array: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Please enter value at " << i << " index: ";
        cin >> array[i];
    }

    cout << "Original Array: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Array value at " << i << " Index: " << array[i] << endl;
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] == findout) {
            cout << "Array element present at index: " << i << endl;
            ispresent = true;
        }
    }

    if (!ispresent) {
        cout << "Sorry, Array element not present in Given array!";
    }

    return 0;
}
