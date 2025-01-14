#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(5);

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);

    cout << "Vector elements: " << endl;
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Size of vector after adding extra elements: " << v1.size() << endl;
    return 0;
}
