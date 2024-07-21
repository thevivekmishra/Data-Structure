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

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//finding middle 
Node *getMiddle(Node *&head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
    }
    //if there is only one node
    if(head->next == NULL){
        return head;
    }

    //when linked list is greater than 1
    //we have to move, fast 2 steps and slow 1 steps
    Node *fast = head;
    Node *slow = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next; //one step bcz suppose fast is at last node if we directly do two steps then error comes
        //now check is fast is on last node  if not then move next step
        if(fast != NULL){
            fast = fast->next;  //2 steps moved now move slow one steps
            slow = slow->next;
        }
    }
    return slow;
}

int getLength(Node *head ){
int len = 0;
Node *temp = head;
while(temp != NULL){
    temp = temp->next;
    len++;
}
return len;
}

Node* reverseKNode(Node *&head,int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
    }

    int len = getLength(head);
    if(k>len){
        cout<<"Enter a valid lenght"<<endl;
        return head;
    }
   
   //when size of LL >= k
   //step 1-> reverse first k nodes of LL
   Node *prev = NULL;
   Node *curr = head;
   Node *forward = curr->next;
   int count = 0;

   while(count < k){
    forward = curr->next;
     curr->next = prev;
     prev = curr;
     curr = forward;
     count++;
   }
   //step 2-> recursive call
   if(forward  != NULL){
    head->next = reverseKNode(forward,k);
   }
   //step 3 return head of the modified LL
   return prev;

}
int main (){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    cout<<endl;

    cout<<"Middle node is "<<getMiddle(head)->data<<endl;

    head = reverseKNode(head,3);
    print(head);
    return 0;
}