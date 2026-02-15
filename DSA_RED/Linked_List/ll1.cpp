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
Node *InsertAtEnd(int value, Node *&head, Node *&tail)
{
    if (head == NULL)
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
int get_length(Node *head){
    int len=0;
    Node *temp=head;
    while(temp != NULL){
        len++;
        temp=temp->next;
    } 
    return len;
}

void InsertAtPosition(int val,int position,Node* &head, Node* &tail){
    //Assuming  position is valid and starts from 1.
    //if insert position is first Node then call InsertAtHead function
    //checking valid range of position 1.)Valid range is 1->length+1 2.)position should be greater than 0.
    int length=get_length(head);
    if(position<1 || position>length+1){
        cout<<"Invalid position(out of bound). Position should be greater than 0 and less than length+1."<<endl;
        return;
    }
    if(position==1){
        InsertAtHead(val,head,tail);
        return;
    }
    //if insert position is last Node then call InsertAtEnd function
    if(position==length+1){
        InsertAtEnd(val,head,tail);
        return;
    }
    else{
    //if insert position is anywhere between first and last Node then do following steps
    //step1: create a new node
    Node *newNode=new Node(val);
    //step2: traverse the linked list to position just before where we want to insert
    Node *temp=head;
    for(int i=1;i<=position-2;i++){             //IMP**////***position-2 is taken because if position=3 then we only move from 1 to 2 i.e 3-2 one time.****/
        temp=temp->next;        

    }
    //step3: new Node next will be conneected to temp->next of current node 
    newNode->next=temp->next;
    //step4: connect temp->next of current node to new Node
    temp->next=newNode;
    }}
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
    InsertAtEnd(30, head, tail);
    InsertAtEnd(43, head, tail);
    InsertAtPosition(44,7,head,tail);
    // Print Linked List
    PrintLL(head);
    cout << srch(head, target);
    cout<<endl;
    cout<<"Length of linked list is: "<<get_length(head)<<endl;

    return 0;
}

/* 
IMP (HomeWork)
#   find minimum and maximum in linked list.
#   find sum of all elements in linked list.
#   find even, odd elements in linked list.
*/
 