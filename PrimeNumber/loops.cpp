// Check is a given number is prime or not

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number to check: ";
    cin >> number;

    int i = 2;
    bool isPrime = true;
    if (number == 2) {
        cout << "Prime";
    } else {
        while (i < number) {
            if (number % i == 0) {
                isPrime = false;
            }
            i = i + 1;
        }

        if (isPrime) {
            cout << "Prime";
        } else {
            cout << "Composite";
        }
    }
}