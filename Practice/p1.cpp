#include<iostream>
#include<string>
using namespace std;
/* int po(int n){
    if(n==0)return 1;
    return 2*po(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<< po(n);
} */
void babb(string name,int n){
    if(n==0)return;
    cout<<name<<endl;
    return babb(name,n-1);
}
int main(){
    int n;
    string name;
    cin>>n;
    cin>>name;
    babb(name,n);
}