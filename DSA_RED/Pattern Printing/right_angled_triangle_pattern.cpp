//notion file is added for question in readme file of github repository

#include <iostream>
using namespace std;
class Solution {
public:
    void printRightAngleTriangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};