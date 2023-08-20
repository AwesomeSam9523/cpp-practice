/*
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0;
    while (i < n) {
        int spaces = 0;
        int spaceRequired = n - i - 1;
        while (spaces < spaceRequired) {
            cout << " ";
            spaces++;
        }
        int numbers = 0;
        while (numbers < i) {
            cout << numbers + 1;
            numbers++;
        }
        cout << i + 1;
        numbers = 0;
        while (numbers < i) {
            cout << i - numbers;
            numbers++;
        }
        spaces = 0;
        while (spaces < spaceRequired) {
            cout << " ";
            spaces++;
        }
        i++;
        cout << endl;
    }
}