#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
void even(int *arr,int size,int index){
    //base case
    if(index==size)return;
    //1 case solved
    if((arr[index]&1)==0)cout<<arr[index]<<" ";
    //recursive call
    even(arr,size,index+1);
}
void odd(int *arr,int size,int index){
    //base case
    if(index==size)return;
    //1 case solved
    if((arr[index]&1)!=0)cout<<arr[index]<<" ";
    //recursive call
    odd(arr,size,index+1);
}
int main(){
    //array
    int arr[]={2,7,5,12};
    int size=4;
    int index=0;
    cout<<"Even Numbers are: ";
    even(arr,size,index);
    cout<<endl;
    cout<<"Odd Numbers are: ";
    odd(arr,size,index);
}