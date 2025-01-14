
// Stack Using Vectors

// Implementation:

// 1. Vectors provide dynamic array capabilities with automatic resizing.

// 2.  Vectors are part of the STL, which provides built-in stack operations.

#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> vec;

public:
    void push(int data) {
        vec.push_back(data);
    }

    int pop() {
        if (vec.empty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int topElement = vec.back();
        vec.pop_back();
        return topElement;
    }

    int peek() {
        if (!vec.empty()) {
            return vec.back();
        }
        return -1;
    }

    bool isEmpty() {
        return vec.empty();
    }

    int size() {
        return vec.size();
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}
