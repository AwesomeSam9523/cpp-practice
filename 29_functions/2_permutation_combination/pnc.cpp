#include <iostream>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    cout << fact_n / (fact_r * fact_n_r) << endl;
}
