#include<iostream>
using namespace std;
class Solution {
public:
    void printSquare(int n) {
        // User to fill this part
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};