#include<iostream>
using namespace std;

class Node{

    public :

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

}


void display(Node* head){

Node* temp = head;

while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
}

cout<<"NULL"<<endl;

}

int main(){

    Node* head = NULL;

    insertAtTail(head,11);
    insertAtTail(head,22);
    insertAtTail(head,33);
    insertAtTail(head,44);
    insertAtTail(head,55);

    display(head);


}