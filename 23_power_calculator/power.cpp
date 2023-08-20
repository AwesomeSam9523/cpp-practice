#include <iostream>
using namespace std;

int main() {
    int x, n, answer;
    cin >> x >> n;
    answer = 1;
    int i = 1;
    if (x == 0 && n == 0) {
        answer = 1;
    } else {
        // cout << "in else" << endl;
        while (i <= n) {
            // cout << "i: " << i << "  x: " << x << endl;
            answer = answer * x;
            i = i + 1;
        }
    }
    cout << answer << endl;
}