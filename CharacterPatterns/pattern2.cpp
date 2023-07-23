/*
A
BB
CCC
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char start = 'A';
    int i = 0;
    while (i < n) {
        start = start + i;
        int j = 0;
        while (j <= i) {
            cout << start;
            j++;
        }
        start = 'A';
        i++;
        cout << endl;
    }
}