
#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtPosition(Node* &head, int data, int position){
    Node* newNode = new Node(data);

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


void print(Node* &head){
    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }

    cout<<"NULL"<<endl;
}

int main(){

    Node* head = NULL;

    insertAtPosition(head,10,1);
    insertAtPosition(head,20,2);
    insertAtPosition(head,30,3);
    insertAtPosition(head,40,4);
    insertAtPosition(head,50,5);
    insertAtPosition(head,60,1);

    print(head);

}