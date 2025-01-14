#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 45, 67, 89, 98, 34, 45, 68, 96, 85};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << n << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
