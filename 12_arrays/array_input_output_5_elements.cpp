#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Please Enter Element in Array: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Please enter value at " << i << " index: ";
        cin >> arr[i];
    }

    cout << "Output: " << endl;

    for (int i = 0; i < 5; i++) {
        // cout << "Output at " << i << " index: " << arr[i] << endl;
        cout << arr[i] << " ";
    }
    return 0;
}
