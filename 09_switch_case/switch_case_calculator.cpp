#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Please enter first Number: ";
    cin >> num1;
    char op;

    cout << "Please enter operator: ";
    cin >> op;
    int num2;
    cout << "Please enter Second Number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Sum: " << num1 + num2;
            break;
        case '-':
            cout << "Subtract: " << num1 - num2;
            break;
        case '*':
            cout << "Multiply: " << num1 * num2;
            break;
        case '/':
            cout << "Divide: " << num1 / num2;
            break;
        case '%':
            cout << "Remainder: " << num1 % num2;
            break;
        default:
            cout << "Please enter a correct operator" << endl;
    }

    return 0;
}
