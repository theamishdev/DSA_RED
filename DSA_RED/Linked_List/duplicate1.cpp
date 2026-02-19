#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
/*        if(head==NULL)return NULL;
        set<int>s;                                  /*This approach removes duplicate via set(prefered for unsorted list)
        ListNode* temp=head;
        while(temp!=NULL){
            s.insert(temp->val);                    
            temp=temp->next;
        }

        ListNode*  newhead=NULL;
        ListNode* tail=NULL;
        for(int x:s){
            if(newhead==NULL){
            ListNode *newNode=new ListNode(x);
            newhead=newNode;
            tail=newNode;
            }
            else{
                ListNode *newNode=new ListNode(x);
                tail->next=newNode;
                tail=newNode;
            }
        }
        return newhead;                         */
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val==temp->next->val){                 /*This method simply checks adjacent value and if found duplicate stores next value in ll(prefered for sorted data)*/
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution obj;
    head = obj.deleteDuplicates(head);

    printList(head);

    return 0;
}