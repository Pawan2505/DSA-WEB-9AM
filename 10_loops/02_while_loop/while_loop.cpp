#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int newNum;
    cout << "Please enter newNum: ";
    cin >> newNum;

    while (newNum == num) {
        cout << "Number: " << num << endl;
        break;  
    }
    return 0;
}
