#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {12, 34, 56, 78, 8};

    int value = 100;
    int present = 2;

    for (int i = n; i >= present; i--) {
        arr[i] = arr[i - 1];

        if (i == present) {
            arr[present] = value;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
