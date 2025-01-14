#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
   
    // num1 = num1 % 5;
    num1 %= 5;

    cout << "Result = " << num1 << endl;  // Output: 0
    return 0;
}
