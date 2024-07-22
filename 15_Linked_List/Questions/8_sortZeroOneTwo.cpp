#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sortZeroOneTwo(Node *&head){
    int zero = 0;
    int one = 0;
    int two = 0;

    Node *temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zero++;
        }
        else if(temp->data == 1){
            one++;
        }
        else if(temp->data == 2){
            two++;
        }
        temp = temp->next;
    }
    //fill 0,1,2 in the original LL
    temp = head;
    while(temp != NULL){
        while(zero--){
            temp->data = 0;
            temp = temp->next;
        }
        while(one--){
            temp->data = 1;
            temp = temp->next;
        }
        while(two--){
            temp->data = 2;
            temp = temp->next;
        }
    }
}


int main() {
    Node *head = new Node(0);
    Node *second = new Node(0);
    Node *third = new Node(1);
    Node *fourth = new Node(0);
    Node *fifth = new Node(1);
    Node *sixth = new Node(2);
    Node *seventh = new Node(2);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    cout << "Input LL: ";
    print(head);

    sortZeroOneTwo(head);
    print(head);

  

    return 0;
}
