#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std; 
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};
Node* InsertAtHead(int value,Node* &head,Node* &tail){
    if(head==NULL){
        Node *newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode=new Node(value);
        newNode->next=head;
        head=newNode;
    }
    return head;
}
void print_ll(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<"->";
        }
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    InsertAtHead(44,head,tail);
    InsertAtHead(50,head,tail);
    InsertAtHead(60,head,tail);
    InsertAtHead(70,head,tail);
    InsertAtHead(80,head,tail);
    print_ll(head);
}