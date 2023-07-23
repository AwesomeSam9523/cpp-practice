/*
1
21
321
4321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int j = 0;
        while (j < row) {
            cout << row-j;
            j++;
        }
        row++;
        cout << endl;
    }
}