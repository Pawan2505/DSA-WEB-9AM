#include <iostream>
using namespace std;

namespace na {
    int number = 22;
}
namespace nb {
    int number = 999;
}

int number = 30; // global variable

int main() {
    int number = 10;  // local variable

    // namespace nc {     //namespace definition is not allowed here
    //     int number = 100;
    // }
    
    cout << number << endl;

    {  // block of scope
        int number = 20;   // local variable
        cout << "Output 1 = " << number << endl;
    }

    cout << "Global Variable = " << ::number << endl;
    cout << "Namespace na = " << na::number << endl;
    cout << "Namespace nb = " << nb::number << endl;

    return 0;
}
