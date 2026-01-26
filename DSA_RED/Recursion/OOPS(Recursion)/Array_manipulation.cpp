#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;
int searching(int *arr,int size,int index,int element ){
    //base condition
    if(index==size)return -1;
    //1 case solved
    if(arr[index] == element) {
        return index;
    }
    //recursive call
    return searching(arr, size, index + 1, element);
}
  void max_element(int *arr,int size,int index,int &maxi){  
        //base case
    if(index==size)return;
    //1 case solved
    maxi=max(maxi,arr[index]);
    //recursive call
    max_element(arr,size,index+1,maxi);
    } 
void min_element(int *arr,int size,int index,int &mini){
    //base case
    if(index==size)return;
    //1 case solved
    mini=min(mini,arr[index]);
    //recursive call
    min_element(arr,size,index+1,mini);
}; 
int main(){
int arr[]={24,30,45,13,55,79};
int size=6;
int element=45;
int index=0;
int mini=INT_MAX;
int maxi=INT_MIN;
cout<<"value being searched is at: "<<searching(arr,size,index,element)<<endl;
min_element(arr,size,index,mini);
cout<<"Minimum Value is: "<<mini<<endl;
max_element(arr,size,index,maxi);
cout<<"Maximum Value is: "<<maxi<<endl;
}