#include <iostream>
using namespace std;

int main() {
    int number1 = 1, number2 = 1;
    int n;

    cin >> n;
    int i = 2;
    for (int i = 2; i < n; i++) {
        number2 = number1 + number2;
        number1 = number2 - number1;
    }
    cout << number2 << endl;
}