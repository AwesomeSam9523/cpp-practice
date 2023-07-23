/*
1
23
456
78910
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    int toPrint = 1;
    while (row <= n) {
        int j = 1;
        while (j <= row) {
            cout << toPrint;
            j++;
            toPrint++;
        }
        row++;
        cout << endl;
    }
}