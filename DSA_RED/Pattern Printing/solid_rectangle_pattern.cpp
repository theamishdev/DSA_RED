//notion file is added for question in readme file of github repository

using namespace std;
#include <iostream>
class Solution {
public:
    void printSolidRectangle(int n, int m) {
        // Implement the pattern printing logic here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};