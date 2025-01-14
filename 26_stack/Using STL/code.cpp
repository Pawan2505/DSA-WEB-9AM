

// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;

//     // Push elements onto the stack
//     s.push(10);
//     s.push(20);
//     s.push(30);

//     // Display the top element
//     cout << "Top element is: " << s.top() << endl;

//     // Pop an element from the stack
//     s.pop();

//     // Display the top element again
//     cout << "After pop, top element is: " << s.top() << endl;

//     // Check if the stack is empty
//     if (s.empty()) {
//         cout << "Stack is empty." << endl;
//     } else {
//         cout << "Stack is not empty." << endl;
//     }

//     // Display the size of the stack
//     cout << "Stack size is: " << s.size() << endl;

//     return 0;
// }




// Using Class and object


#include <iostream>
#include <stack>
using namespace std;

class Stack {
private:
    stack<int> s;
    int capacity;

public:
    Stack(int cap) {
        capacity = cap;
    }

    void push(int data) {
        if (s.size() < capacity) {
            s.push(data);
            cout << data << " pushed to stack" << endl;
        } else {
            cout << "Stack overflow, cannot push " << data << endl;
        }
    }

    void pop() {
        if (!s.empty()) {
            int topElement = s.top();
            s.pop();
            cout << topElement << " popped from stack" << endl;
        } else {
            cout << "Stack underflow, cannot pop" << endl;
        }
    }

    void peek() {
        if (!s.empty()) {
            cout << "Top element is: " << s.top() << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void display() {
        if (s.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        stack<int> temp = s;
        cout << "Stack elements are: ";
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    bool isEmpty() {
        return s.empty();
    }

    bool isFull() {
        return s.size() == capacity;
    }

    int size() {
        return s.size();
    }
};

int main() {
    Stack myStack(5);

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60); // This should trigger a stack overflow message

    myStack.display();

    myStack.peek();

    myStack.pop();
    myStack.pop();
    
    myStack.display();

    cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (myStack.isFull() ? "Yes" : "No") << endl;
    cout << "Stack size: " << myStack.size() << endl;

    return 0;
}

