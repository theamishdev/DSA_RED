#include<iostream>
using namespace std;

int binary_search(int *arr,int start,int end,int target){
    //base case
    if(start > end) return -1;

    //mid value
    int mid = start + (end - start) / 2;

    //1 case solved
    if(arr[mid] == target) return mid;

    //recursive call
    if(arr[mid] < target){
        return binary_search(arr, mid + 1, end, target);
    } 
    else{
        return binary_search(arr, start, mid - 1, target);
    }
}

int main(){
    int arr[]={12,23,34,45,56,66};
    int start=0;
    int end=5;
    int target=66;

    cout << binary_search(arr,start,end,target);
}
//Given an array return true or false for wether array is sorted or not using recursion.