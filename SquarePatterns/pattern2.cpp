/*
1111
2222
3333
4444
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 0;
        while (j < n) {
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }
}