#include<iostream>
#include <climits>
using namespace std;
int searching(int *arr,int size,int index,int element ){
    //base condition
    if(index==size)return -1;
    if(arr[index] == element) {
        return index;
    }
    return searching(arr, size, index + 1, element);
    if(arr[index]!=element)return -1;
}
 void max_element(int *arr,int size,int index){
    int min=INT_MIN;
    if(index==size)return;
    if(arr[index]>min){
        
    }
    max_element(arr,size,index+1);
 }
//void min_element(){} */
int main(){
int arr[]={24,30,45,13,55,79};
int size=6;
int element=45;
int index=0;
cout<<searching(arr,size,index,element);
}