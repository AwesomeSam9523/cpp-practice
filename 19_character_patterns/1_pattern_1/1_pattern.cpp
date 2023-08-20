/*
ABCD
ABCD
ABCD
ABCD
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char start = 'A';
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << start;
            start = start + 1;
            j++;
        }
        start = 'A';
        i++;
        cout << endl;
    }
}