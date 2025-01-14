#include <iostream>
using namespace std;

class Jyoti {
public:
    virtual void teaching() {
        cout << "Madam teaches backend..." << endl;
    }
};

class Pawan : public Jyoti {
public:
    void teaching() override {
        cout << "I teach Frontend..." << endl;
    }
};

int main() {
    Pawan p1;
    p1.teaching();
    return 0;
}
