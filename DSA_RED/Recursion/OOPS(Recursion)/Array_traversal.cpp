#include<iostream>
using namespace std;
void check(int arr[],int size,int index){
    //base condition
    if(index>=size)return;
    //1 case solve 
    cout<<arr[index]<<endl;
    //recursion call
    check(arr,size,index+1);
}
void  reverse_print(int *arr,int size){
    //base condition
    if(size==0)return;
    //1 case solve
    cout<<arr[size-1]<<" "; 
    //recursion call
    reverse_print(arr,size-1);
}
int main(){
    //array
    int arr[]={2,7,5,12};
    //size of array
    int size=4;
    //index of array
    int index=0;
    //function pass
    check(arr,size,index);
    cout<<endl;
    //function pass
    reverse_print(arr,size);
}