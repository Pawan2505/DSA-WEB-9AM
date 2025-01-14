#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void insertAtHead(Node* &head, int data){
    //step 1: Create a Node

    Node* newNode = new Node(data);

    // Step 2: 

    newNode->next = head;

    // Step 3: 

    head = newNode;

}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    } 
    cout<<"NULL"<<endl;
}



int main(){

    Node *head = new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    insertAtHead(head,70);

    print(head);

}