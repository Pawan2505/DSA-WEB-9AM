#include <iostream>
using namespace std;

int main() {
    int num1 = 1332;
    int num2 = 223;
    int num3 = 30;

    ((num1 > num2) && (num1 > num3)) ? cout << "Greater Num1" : ((num2 > num1) && (num2 > num3)) ? cout << "Greater Num2" : cout << "Greater Num3";
    return 0;
}
