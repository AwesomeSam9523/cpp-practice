#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int i = 10;
    int reversed = 0;
    int maxi = 1;

    while (number % maxi != number) {
        maxi = maxi * 10;
    }
    // cout << maxi << endl;

    bool breakNextTime = false;
    while (true) {
        if (breakNextTime) {
            // cout << "breaking" << endl;
            break;
        }
        int result = number % i;
        if (result == number) {
            // we have breached the max length
            breakNextTime = true;
        }
        if (result == 0) {
            // units digit 0?
            // cout << "digit 0?" << endl;
            i = i * 10;
            continue;
        }
        // cout << "i = " << i << " result = " << result << " i/result: " << i / result << endl;
        // cout << "we got result as: " << result << " and modulas as " << result / 10 << endl;
        if (i / result > 10) {
            // we got a 0
            i = i * 10;
            continue;
        }
        while (result >= 10) {
            result = result / 10;
            // cout << "  |- result getting reduced: " << result << endl; 
        }
        // cout << endl;
        // cout << "final result: " << result << " and multiply by " << i/10 << endl << endl;

        reversed = reversed + (result * (maxi / i));
        i = i * 10;
    }
    cout << reversed << endl;
}