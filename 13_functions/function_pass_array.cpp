#include <iostream>
using namespace std;

void display(int brr[], int s) {
    for (int i = 0; i < s; i++) {
        cout << brr[i] << " ";
    }
}

int main() {
    int n = 6;
    int arr[n] = {12, 43, 56, 76, 87, 3};
    display(arr, n);
    return 0;
}
