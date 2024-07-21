// Floyd Cycle Detection Approach to find the starting point in a loop 

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

bool checkForLoop(Node *&head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            //means loop present 
            return true;
        }
    }
    //fast == NULL
    return false;
}

Node *startingPointLoop(Node *&head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
          slow = head;
          break;
        }
    }
   while(slow != fast ){
    slow = slow->next;
    fast = fast->next;
   }
   return slow;
}
int main (){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *nineth = new Node(90);
   

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = fifth; //loop
    

   cout<<"Loop is present or not :"<<checkForLoop(head)<<endl;
   cout<<"Starting point of LOOP is :"<<startingPointLoop(head)->data;

   

    return 0;
}