#include <iostream>
using namespace std;
class Solution {
public:
    void printHollowRectangle(int n, int m) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1 || i==n || j==1 || j==m){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
};