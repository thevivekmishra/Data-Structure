#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    // Default constructor
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    // Parametrized constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        cout << "Node with value: " << this->data << " deleted\n";
    }
};

// Print the linked list
void print(Node *&head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Get length of the linked list
int getLength(Node *&head) {
    int len = 0;
    Node *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

// Insert at head
void insertAtHead(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Insert at end
void insertAtEnd(Node *&head, Node *&tail, int data) {
    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node *newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// Insert at a specific position
void insertAtPosition(Node *&head, Node *&tail, int data, int position) {
    if (head == NULL) {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        if (position == 1) {
            insertAtHead(head, tail, data);
            return;
        }
        int len = getLength(head);
        if (position > len) {
            insertAtEnd(head, tail, data);
            return;
        }

        int i = 1;
        Node *prevNode = head;
        while (i < position - 1) {
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode->next;

        Node *newNode = new Node(data);
        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = curr;
        curr->prev = newNode;
    }
}

// Delete from a specific position
void deleteFromPos(Node *&head, Node *&tail, int position) {
    if (head == NULL) {
        cout << "LL is empty\n";
        return;
    }

    if (head->next == NULL) { // single node
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if (position > len) {
        cout << "Enter a valid position\n";
        return;
    }

    if (position == 1) { // delete the first node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == len) { // delete the last node
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    // delete from middle
    int i = 1;
    Node *left = head;
    while (i < position - 1) {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    left->next = right;
    right->prev = left;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main() {
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    print(head);

    cout << "Insert at head: ";
    insertAtHead(head, tail, 101);
    print(head);

    cout << "Insert at end: ";
    insertAtEnd(head, tail, 500);
    print(head);

    cout << "Insert at position: ";
    insertAtPosition(head, tail, 1111, 2);
    print(head);

    cout << "Deletion: ";
    deleteFromPos(head, tail, 1);
    print(head);

    return 0;
}
