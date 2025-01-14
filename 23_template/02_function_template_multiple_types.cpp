#include <iostream>
using namespace std;

template<typename T1, typename T2>
T2 addition(T1 num1, T2 num2) {
    T2 result = num1 + num2;
    cout << result << endl;
    return result;
}

int main() {
    addition(10, 20.2);
    return 0;
}
