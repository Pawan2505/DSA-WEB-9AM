#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(220);
    v1.push_back(30);
    v1.push_back(440);
    v1.push_back(50);
    v1.push_back(600);
    v1.push_back(70);
    v1.push_back(80);

    cout << "Vector elements: " << endl;
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Size of vector after adding extra elements: " << v1.size() << endl;

    // pop_back()
    cout << "Vector after pop_back: " << endl;
    v1.pop_back();
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // at()
    cout << "Element present at 3rd index: " << v1.at(3) << endl;

    // insert()
    cout << "Insert element at 2nd index: " << endl;
    v1.insert(v1.begin() + 2, 1000);
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // erase()
    cout << "Delete element at 2nd index: " << endl;
    v1.erase(v1.begin() + 2);
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // empty()
    cout << "Vector elements present: " << (v1.empty() ? "NO" : "YES") << endl;
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // reverse()
    cout << "Vector reverse: " << endl;
    reverse(v1.begin(), v1.end());
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // sort()
    cout << "Vector sort: " << endl;
    sort(v1.begin(), v1.end());
    for (int element : v1) {
        cout << element << " ";
    }
    cout << endl;

    // back()
    cout << "Vector last element: " << v1.back() << endl;

    // *v1.begin()
    cout << "Vector first element: " << *v1.begin() << endl;

    // *(v1.end()-1)
    cout << "Vector last element: " << *(v1.end() - 1) << endl;

    // front()
    cout << "Vector element at front: " << v1.front() << endl