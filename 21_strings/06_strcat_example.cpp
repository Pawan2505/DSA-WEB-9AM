#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char str1[12] = "Pawan";
    cout << "First size: " << sizeof(str1) << endl;

    char str2[8] = " Maurya";
    strcat(str1, str2);

    cout << str1 << endl;
    cout << "Updated size: " << sizeof(str1) << endl;
    return 0;
}
