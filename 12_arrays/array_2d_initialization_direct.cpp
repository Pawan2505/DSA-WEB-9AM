#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;

    int arr[row][col] =    {{12, 34, 56, 78},
                            {90, 22, 44, 55},
                            {67, 88, 99, 23}};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
