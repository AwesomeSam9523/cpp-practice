/*
    1
   212
  32123
 4321234
543212345
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int spaces = n - row;
        for (int space = 0; space < spaces; space++) {
            cout << " ";
        }

        int charCount = (row * 2) - 1;
        for (int i = 0; i < charCount; i++) {
            int toPrint;
            if (row - i > 0) {
                toPrint = row - i;
            } else {
                toPrint = i - row + 2;
            }

            cout << toPrint;
        }
        cout << endl;
    }
}