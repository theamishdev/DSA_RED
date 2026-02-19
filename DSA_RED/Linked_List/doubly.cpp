#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int value)
    {
        this->prev = NULL;
        this->next = NULL;
        this->data = value;
    }
};
Node *InsertAtHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(value); // same as normal linked list
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->next = head; // newNode ka next point krega pehle node ke head ko
        head->prev = newNode; // head ka previous node point krega naye node ko
        head = newNode;       // head ko naye node pe shift kr denge
    }
    return head;
}
Node *InsertAtEnd(int value, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode->prev = tail;
        tail->next=newNode;
        tail = newNode;
    }
    return head;
}
void print_ll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
        {
            cout << "->";
        }
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *prev = NULL;
    InsertAtHead(40, head, tail);
    InsertAtHead(30, head, tail);
    InsertAtHead(20, head, tail);
    InsertAtHead(10, head, tail);
    InsertAtEnd(50, head, tail);
    InsertAtEnd(60, head, tail);
    InsertAtEnd(70, head, tail);
    InsertAtEnd(80, head, tail);
    print_ll(head);
}