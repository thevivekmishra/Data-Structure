#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor 
    Node(){
        this->data = 0;
        this->next = NULL;

    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Insertion at head/begining
void insertAtHead(Node* &head ,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
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
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);

  print(head);
  return 0;
}