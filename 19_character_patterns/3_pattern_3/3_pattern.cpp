/*
A
BC
CDE
DEFG
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char start = 'A';
    int i = 0;
    while (i < n) {
        char toPrint = start + i;
        int j = 0;
        while (j <= i) {
            cout << toPrint;
            toPrint = toPrint + 1;
            j++;
        }
        i++;
        cout << endl;
    }
}