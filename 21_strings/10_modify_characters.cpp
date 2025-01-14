#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Pawan Maurya";

    str1[0] = 'q';

    for (int i = 0; i < str1.length(); i++) {
        cout << str1[i] << endl;
    }
    return 0;
}
