#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;
class Node{
    int data;
    Node* next;
Node(int value){
    this->data=value;
    this->next=NULL;
}
}