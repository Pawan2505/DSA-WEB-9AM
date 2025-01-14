#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int result = a-- - --a; // 10 - 8 = 2

    cout << "Value = " << a << endl;   // output: 8
    cout << "Result = " << result << endl;   // output: 2
    return 0;
}
