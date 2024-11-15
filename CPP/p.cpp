#include <iostream>

using namespace std;

class Data {
public:
    Data() {
        cout << "Data Constructor called" << endl;
    }

    ~Data() {
        cout << "Data Destructor called" << endl;
    }
};

int main() {
    // Allocating an array of Data objects
    Data* dataArray = new Data[3];

    // Each element's constructor is called individually.
    cout << "Array of Data objects created." << endl;

    // Deallocating memory
    delete[] dataArray; // Calls destructor for each element
    return 0;
}
