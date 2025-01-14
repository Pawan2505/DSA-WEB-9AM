#include <iostream>
using namespace std;

void addition(int x, int y) {   // parameter
    int result = x + y;
    cout << "Result: " << result << endl;
}

int main() {
    addition(30, 50);   // argument
    return 0;
}
