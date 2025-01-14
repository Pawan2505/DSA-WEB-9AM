#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;

    // push_back()
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // ForEach()
    cout << "Using foreach loop: " << endl;
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // Size()
    cout << "Size of Vector: " << v1.size() << endl;

    // For loop
    cout << "Using for loop: " << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
