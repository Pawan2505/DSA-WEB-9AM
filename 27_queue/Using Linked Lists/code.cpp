#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
public:
    Node* front;
    Node* back;

public:
    Queue() {
        front = NULL;
        back = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);

        if (front == NULL) {
            back = newNode;
            front = newNode;
            return;
        }

        back->next = newNode;
        back = newNode;
    }

    void pop() {
        if (front == NULL) {
            cout << "Queue underflow!" << endl;
            return;
        }

        Node* frontDelete = front;
        front = front->next;

        delete frontDelete;
    }

    int peek() {
        if (front == NULL) {
            cout << "Queue Empty!" << endl;
            return -1;
        }

        return front->data;
    }

    bool empty() {
        return (front == NULL);
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Queue q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << "Queue elements: ";
    q1.display();

    q1.pop();
    cout << "Queue elements after one pop: ";
    q1.display();

    return 0;
}
