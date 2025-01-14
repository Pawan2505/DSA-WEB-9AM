#include <iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int front;
    int back;
    int capacity;

    Queue(int size) {
        arr = new int[size];
        front = -1;
        back = -1;
        capacity = size;
    }

    void push(int data) {
        if (back == capacity - 1) {
            cout << "Queue overflow!" << endl;
            return;
        }

        back++;
        arr[back] = data;

        cout << data << " enqueued in queue!" << endl;

        if (front == -1) {
            front++;
        }
    }

    int pop() {
        if (front == -1 || front > back) {
            cout << "Queue underflow!" << endl;
            return -1;
        }

        int popped_Value = arr[front];
        front++;

        cout << popped_Value << " dequeued from queue!" << endl;
        return popped_Value; 
    }

    void display() {
        if (front == -1 || front > back) {
            cout << "Queue is empty!" << endl;
            return;
        }

        for (int i = front; i <= back; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    int peek() {
        if (front == -1 || front > back) {
            cout << "Element not present in Queue!" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty() {
        return (front == -1 || front > back); 
    }
};

int main() {
    Queue q1(5);

    q1.display();

    cout << "Enqueue Operation: " << endl;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    q1.display();
    cout << "Dequeue Operation: " << endl;

    q1.pop();

    cout << "Display Operation: " << endl;

    q1.display();

    cout << "Peek element in queue: " << q1.peek() << endl;

    cout << "Queue is empty: " << (q1.empty() ? "Yes" : "No") << endl;

    return 0;
}
