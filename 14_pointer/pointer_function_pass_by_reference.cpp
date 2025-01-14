#include <iostream>
using namespace std;

void display(int &value) {
    value *= 5;
    cout << &value << endl;
    cout << value << endl;
}

int main() {
    int num = 10;
    display(num);
    cout << &num << endl;
    cout << num << endl;
    return 0;
}
