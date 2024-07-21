#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    //ctor
    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    //parametrized ctor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

//printing
void print(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node *&head){
    int len = 0;
    Node *temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

//insertion at head
void insertAtHead(Node *&head, Node *&tail, int data){
    //LL is empty
    if(head == NULL){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is not empty
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

//insertion at end
void insertAtEnd(Node *&head, Node *&tail, int data){
    //LL is empty
    if(head == NULL){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is not empty
        Node *newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail , int data ,int position){
    //LL is empty
    if(head == NULL){
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //LL is not empty
        if(position == 1){
            insertAtHead(head,tail,data);
            return;
        }
        int len = getLength(head);
        if(position > len ){
            insertAtEnd(head,tail,data);
            return;
        }

        //insert at position 
        //find prev and curr
        int i = 1;
        Node *prevNode = head;
        while(i < position - 1 ){
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode -> next;

        //next steps
        Node *newNode = new Node(data);
        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode->next = curr;
    }
}

int main(){

    Node *first = new Node(10); 
    Node *second = new Node(20);
    Node *third = new Node(30);

    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;
    
    second->next = third;
    third->prev = second;

  print(first);
  cout<<endl;

  cout<<"Insert at head : ";
  insertAtHead(head,tail,101);
  print(head);
  cout<<endl;

  cout<<"Insert at end : ";
  insertAtEnd(head,tail,500);
  print(head);
  cout<<endl;

  
  cout<<"Insert at position  : ";
  insertAtPosition(head,tail,1111,2);
  print(head);
  cout<<endl;

  return 0;
}