#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; count <= n; i++) {
        int term = (3 * i) + 2;
        if (term % 4 == 0) {
            continue;
        }
        count++;
        cout << term << " ";
    }
}