#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {10, 20, 30, 40, 50};

    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
