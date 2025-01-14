#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;

    int arr[row][col];

    arr[0][0] = 11;
    arr[0][1] = 22;
    arr[0][2] = 33;
    arr[0][3] = 44;
    arr[1][0] = 55;
    arr[1][1] = 66;
    arr[1][2] = 543;
    arr[1][3] = 12;
    arr[2][0] = 23;
    arr[2][1] = 65;
    arr[2][2] = 98;
    arr[2][3] = 100;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
