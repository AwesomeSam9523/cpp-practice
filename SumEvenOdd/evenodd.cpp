#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int i = 10;
    int sumeven = 0;
    int sumodd = 0;
    bool breakNextTime = false;
    while (true) {
        if (breakNextTime) {
            break;
        }
        int result = number % i;
        if (result == number) { // we have breached the max length
            breakNextTime = true;
        }
        if (result == 0) {
            // units digit 0?
            i = i * 10;
            continue;
        }
        // cout << "i = " << i << " i/result: " << i / result << endl;
        // cout << "we got result as: " << result << " and modulas as " << result / 10 << endl;
        if (i / result >= 10) {
            // we got a 0
            i = i * 10;
            continue;
        }
        i = i * 10;
        while (result >= 10) {
            result = result / 10;
            // cout << "  |- result getting reduced: " << result << endl; 
        }
        // cout << endl;
        // cout << "final result: " << result << endl << endl;
        if (result % 2 == 0) {
            sumeven += result;
        } else {
            sumodd += result;
        }
        // cout << sumeven << " " << sumodd << endl;
    }
    cout << sumeven << " " << sumodd << endl;
}