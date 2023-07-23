/*
1
12
123
1234
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int j = 1;
        while (j <= row) {
            cout << j;
            j++;
        }
        row++;
        cout << endl;
    }
}