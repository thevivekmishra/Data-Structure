#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //default constructor 
    Node(){
        this->data = 0;
        this->next = NULL;

    }
    //parametrized ctor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Insertion at head/begining
void insertAtHead(Node* &head,Node* &tail ,int data){
    //check for empty linked list
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
};

//Insertion at head/begining
void insertAtTail(Node* &head, Node* &tail ,int data){
    //check for empty linked list
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
};

//print
void print(Node* head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
};

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);

    insertAtTail(head,tail,100);
    insertAtTail(head,tail,110);

  print(head);
  return 0;
}