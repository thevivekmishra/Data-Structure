#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    // parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to calculate length
int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

// Insertion at head/beginning
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Insertion at tail/end
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // check for empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

// Insertion at a specific position
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Insert at the head if position is 0
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // Find the position to insert
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // Create and insert the new node
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

// Print the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // For better formatting
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);

    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 110);

    insertAtPosition(head, tail, 500, 0);

    print(head);
    return 0;
}
