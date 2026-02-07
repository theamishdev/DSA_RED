#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

//default constructor
Node(int value){
    this->data=value;
    this->next=NULL;
}};
//this function returns the head of the updated linked lsit
Node* InsertAtHead(int value, Node* &head, Node* &tail){
    if(head == NULL && tail==NULL ){
    //empty ll insertion
    //step1: create a new node
    Node* newNode=new Node(value);
    //step2: point head and tail on that node
    head=newNode;
    tail=newNode;
    }
    else{
    //non-empty ll insertion
    //step1: create a new node
    Node* newNode=new Node(value);
    //step2: link the new node to the original linked list
    newNode->next=head;
    //step3: update head node to the first node
    head=newNode;
    }
return head; 

}

int main(){
    //Empty Linked List
    Node* head = NULL;
    Node* tail = NULL;
}