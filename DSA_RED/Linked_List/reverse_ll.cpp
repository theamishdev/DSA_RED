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
Node *InsertAtHead(int value, Node *&head, Node *&tail)
{
    if (head == NULL)
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
    cout << endl;
}
Node* reverse_LL(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
}
int main()
{
    cout << "START" << endl;
    // Empty Linked List
    Node *head = NULL;
    Node *tail = NULL;
    int target = 44;
    // Insert values
    InsertAtHead(10, head, tail);
    InsertAtHead(20, head, tail);
    InsertAtHead(60, head, tail);
    InsertAtHead(80, head, tail);
    InsertAtHead(50, head, tail);
    // Print Linked List
    PrintLL(head);
    head=reverse_LL(head);
    cout << endl;
    PrintLL(head);
    return 0;
}
/* 
IMP** 
visual representation of reversing a linked list:   
https://www.youtube.com/watch?v=Vw_8hWUgkHo
*/