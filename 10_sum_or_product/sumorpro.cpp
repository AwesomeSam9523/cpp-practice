#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    if (c == 1) {
        // print the sum
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << endl;
    } else if (c == 2) {
        // print product
        int product = 1;
        for (int i = 1; i <= n; i++) {
            product *= i;
        }
        cout << product << endl;
    } else {
        cout << -1 << endl;
    }
}