/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2; // The middle point of the row

        // 2. Print characters
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
            if (j <= breakpoint) {
                ch++; // Go up (A -> B -> C)
            } else {
                ch--; // Go down (B -> A)
            }
        }
        
        // Use this logic if the above is confusing:
        /*
        for(int j=1; j<i; j++) cout << ch++; // Ascend
        for(int j=1; j<=i; j++) cout << ch--; // Descend
        */

        cout << endl;
    }
    return 0;
}

