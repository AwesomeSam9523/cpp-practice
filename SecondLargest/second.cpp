#include <iostream>
using namespace std;

int main() {
    int largest = 0;
    int second = 0;

    int totalInputs;
    cin >> totalInputs;

    for (int i = 0; i < totalInputs; i++) {
        int inp;
        cin >> inp;

        if (inp > largest) {
            second = largest;
            largest = inp;
        } else if (inp > second) {
            second = inp;
        }
    }

    if (totalInputs == 0 || totalInputs == 1 || largest == second) {
        cout << -2147483648;
    } else {
        cout << second;
    }
}