/*
   1
  232
 34543
4567654
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
            cout << numbers + i + 1;
            numbers++;
        }
        cout << i + numbers + 1;
        numbers = 0;
        while (numbers < i) {
            // cout << endl << "number is " << numbers << endl;
            cout << i + i - numbers;
            numbers++;
        }
        i++;
        cout << endl;
    }
}