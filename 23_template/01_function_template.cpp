#include <iostream>
using namespace std;

template<typename T>
T addition(T num1, T num2) {
    T result = num1 + num2;
    cout << result << endl;
    return result;
}

int main() {
    addition(10, 20);
    return 0;
}
