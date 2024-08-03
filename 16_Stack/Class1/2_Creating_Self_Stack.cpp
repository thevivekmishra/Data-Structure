#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // behaviour
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow" << endl;
        }
    }

    // delete
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    // top
    int getTop()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1; // return an invalid value to indicate the stack is empty
        }
        else
        {
            return arr[top]; // return the top element
        }
    }

    // get size
    int getSize()
    {
        return top + 1;
    }

    // empty
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s(10);

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }

    return 0;
}
