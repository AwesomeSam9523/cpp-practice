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

    int i = 0;
    while (i < n) {
        int starsRequired;
        if (i > n/2) { // middle ke aage chale gaye hai
            starsRequired = (2*(n - i - 1)) + 1;
        } else {
            starsRequired = (2*i) + 1;
        }
        
        int spaceRequired = (n - starsRequired)/2;

        int j = 0;
        while (j < spaceRequired) {
            cout << " ";
            j++;
        }
        int k = 0;
        while (k < starsRequired) {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
}