#include <iostream>
using namespace std;

class Food {
public:
    string name;

    void setFood(string op) {
        name = op;
    }

    void energy() {
        cout << "Food gives energy..." << endl;
        cout << name << endl;
    }
};

class Beans : public Food {
public:
    void proteins() {
        cout << "Beans give proteins..." << endl;
    }
};

int main() {
    Food f1;
    f1.setFood("Orange");

    Beans b1;
    b1.energy();

    return 0;
}
