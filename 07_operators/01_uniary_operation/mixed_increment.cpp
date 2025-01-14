#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int result = a++ + ++a;  // 10 + 12 = 22

    cout << "Value = " << a << endl;   // output: 12
    cout << "Result = " << result << endl;   // output: 22
    return 0;
}
