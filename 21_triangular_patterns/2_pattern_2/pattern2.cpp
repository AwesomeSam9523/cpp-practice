/*
1
23
345
4567
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int j = 1;
        int toPrint = row;
        while (j <= row) {
            cout << toPrint;
            j++;
            toPrint++;
        }
        row++;
        cout << endl;
    }
}