/*
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 0;
    while (row < n) {
        int spaces = 0;
        int spaceRequired = n - row - 1;
        while (spaces < spaceRequired) {
            cout << " ";
            spaces++;
        }
        int stars = 0;
        int starsRequired = (2 * row) + 1;
        while (stars < starsRequired) {
            cout << "*";
            stars++;
        }

        row++;
        cout << endl;
    }
}