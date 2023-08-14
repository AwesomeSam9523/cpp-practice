/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int row = 0; row < n; row++) {
        for (int i = 1; i <= n - row; i++) {
            cout << i;
        }
        int starCount = row * 2;
        for (int i = 0; i < starCount; i++) {
            cout << "*";
        }
        for (int i = n - row; i > 0; i--) {
            cout << i;
        }

        cout << endl;
    }
}
