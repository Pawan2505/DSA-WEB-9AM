#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;

    int arr[row][col];

    cout << "Please enter Element in array: " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Please enter value at row " << i << " index and Col " << j << " index: ";
            cin >> arr[i][j];
        }
    }

    cout << "Output: " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
