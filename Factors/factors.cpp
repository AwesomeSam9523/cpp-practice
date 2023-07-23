// Check is a given number is prime or not

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int i = 2;
    bool isPrime = true;
    if (number == 2) {
        cout << -1;
    } else {
        while (i < number) {
            if (number % i == 0) {
                cout << i << " ";
                isPrime = false;
            }
            i = i + 1;
        }

        if (isPrime) {
            cout << -1;
        }
    }
}