#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(5);

    cout << "Taking input in vector from user: " << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << "Please enter value at " << i << " index: ";
        cin >> v1[i];
    }

    cout << "Output: " << endl;
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
