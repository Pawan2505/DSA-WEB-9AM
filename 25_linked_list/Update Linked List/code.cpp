#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node *newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

// insert Node at specific Position
void insertAtPosition(Node* &head, int position, int data){
    Node *newNode = new Node(data);

    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < position-1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        cout<<"Position out of bound!"<<endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Update Node
void updateNode(Node* &head, int oldData, int newData){
    if(head == NULL){
        cout<<"Linked List Empty!"<<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == oldData){
            temp->data = newData;
            return;
        }

        temp = temp->next;
    }

    cout<<"Node does not exist!"<<endl;
}

void display(Node* &head){
    if(head == NULL){
        cout<<"Linked List is Empty!"<<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 50);

    display(head);

    insertAtPosition(head, 3, 100);

    display(head);

    updateNode(head, 50, 500);

    display(head);

    updateNode(head, 150, 1500);

    display(head);

    return 0;
}
