#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int d = 1;
    int f = 1;
    while (d <= n) {
        f = x * f;
        d = d + 1;
    }
    if (x == 0 && n == 0) {
        cout << "0" << endl;
    } else {
        cout << f << endl;
    }
}