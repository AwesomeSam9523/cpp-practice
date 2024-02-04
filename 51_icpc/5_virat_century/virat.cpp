#include <iostream>
using namespace std;

#define int long long

signed main() {
    int side = -1;
    int x1, x2;
    cin >> x1 >> x2;

    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        if (a - x1 == 0 || b - x2 == 0) {
            side = max(a - x1, b - x2);
            break;
        }
    }
    cout << side * side << endl;
    return 0;
}