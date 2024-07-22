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

// void print(Node *&head){
//     Node *temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

Node *reverse(Node *&head){
    Node *prev = NULL;
    Node *curr = head;
    Node *next = head->next;

    while(curr != NULL){
        next = curr->next; //to keep the track 
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindrome(Node *&head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next == NULL){
        return true;
    }

    //find middle using slow and fast
    Node *slow = head;
    Node *fast = head;    //we get (n/2)+1 th term middle in even case 
    //Node *fast = head->next    -> we get n/2 th term middle in even case 

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }

    //reverse LL after middle node
    Node *reverseLLHead = reverse(slow->next); //reverse ---> slow->next 
    //join the reversed linked list into the left part optional 
    slow->next = reverseLLHead;

    //start comparison
    Node *temp1 = head;
    Node *temp2 = reverseLLHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            //Not a palindrome
            return false;
        }
        else{
            //if equal then move ahead
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}


int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(30);
    Node *sixth = new Node(20);
    Node *seventh = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    bool isPalindrome =  checkPalindrome(head);

    if(isPalindrome){
        cout<<"LL is palindrome"<<endl;
    }
    else{
        cout<<"LL is not palindrome "<<endl;
    }

    // print(head);
    return 0;
        
}
