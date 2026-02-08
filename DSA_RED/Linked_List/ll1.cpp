#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // default constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// this function returns the head of the updated linked lsit
Node *InsertAtHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        // empty ll insertion

        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: point head and tail on that node
        head = newNode;
        tail = newNode;
    }
    else
    {
        // non-empty ll insertion
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: link the new node to the original linked list
        newNode->next = head;
        // step3: update head node to the first node
        head = newNode;
    }
    return head;
}

Node *InsertAtEnd(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        // empty ll insertion
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // non-empty ll insertion
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

// this function prints the linked list
void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " -> "; // This line is not necessary.
        temp = temp->next;
    }
    cout<<endl;
}

string srch(Node *head, int target)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return "Element found in linked list";
        }
        temp = temp->next;
    }
    return "Element not found in linked list.";
}

int main()
{
    // Empty Linked List
    Node *head = NULL;
    Node *tail = NULL;
    int target = 44;
    // Insert values
    InsertAtHead(10, head, tail);
    InsertAtHead(20, head, tail);
    InsertAtEnd(30, head, tail);
    InsertAtEnd(43, head, tail);
    // Print Linked List

    PrintLL(head);
    cout << srch(head, target);

    return 0;
}
