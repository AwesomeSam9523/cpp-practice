#include <iostream>
using namespace std;

int main() {
    double a = 55.5;
    int b = 55;
    a = a % 10; // cannot be done, modulus doesnt work on doubles and floats.
    b = b % 10;
    cout << a << " "  << b;
}