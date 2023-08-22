#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool isFibonacci(int n) {
    for (int i = 0; i <= n; i++) {
        int fib = fibonacci(i);
        if (fib == n) {
            return true;
        }
        if (fib > n) {
            return false;
        }
    }
    return false;
}
 
int main() {
    int n;
    cin >> n;
    bool output = isFibonacci(n);

    cout << output << endl;
}
