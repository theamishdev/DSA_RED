#include<iostream>
using namespace std;
void print_digits(int n){
    //base case
    if(n==0)return;
    //1 case solved
    //find digit and update number 
    int digit=n%10;
    n/=10;
    //recursive call
    print_digits(n);
    cout<<digit<<" ";//if want to print while backtracking print after recursive call.

}
int main(){
int n;
cout<<"enter the number: ";
cin>>n;
print_digits(n);
}