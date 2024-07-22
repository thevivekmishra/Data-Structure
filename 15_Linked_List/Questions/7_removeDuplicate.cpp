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

// Remove duplicates from sorted linked list
void removeDuplicates(Node *&head) {
    if (head == NULL) {
        cout << "LL is empty" << endl;
        return;
    }
    if (head->next == NULL) {
        cout << "LL has no duplicates" << endl;
        return;
    }

    Node *curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }
}

int main() {
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(30);
    Node *fifth = new Node(40);
    Node *sixth = new Node(50);
    Node *seventh = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    cout << "Input LL: ";
    print(head);

    cout << "After removing duplicates: ";
    removeDuplicates(head);
    print(head);

    return 0;
}
