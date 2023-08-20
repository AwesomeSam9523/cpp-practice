/*
  *
 ***
*****
 ***
  *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int starsRequired;
        if (i > n/2) { // middle ke aage chale gaye hai
            starsRequired = (2*(n - i - 1)) + 1;
        } else {
            starsRequired = (2*i) + 1;
        }
        
        int spaceRequired = (n - starsRequired)/2;

        for (int j = 0; j < spaceRequired; j++) {
            cout << " ";
        }
        for (int k = 0; k < starsRequired; k++) {
            cout << "*";
        }
        cout << endl;
    }
}