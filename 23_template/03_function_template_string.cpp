#include <iostream>
using namespace std;

template<typename T>
T names(T n) {
    cout << n << endl;
    return n;
}

int main() {
    names("Pawan");
    return 0;
}
