#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(5, 10);

    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
