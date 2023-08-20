#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary;
    cin >> binary;
    // 111 => 2^2 + 2^1 + 2^0
    int i = 0;
    int decimal = 0;
    while (binary > 0) {
        int digit = binary % 10;
        // cout << "digit: " << digit << " binary: " << binary << endl;
        if (digit != 0) {
            decimal += pow(2, i);
        }
        binary = binary / 10;
        i++;
    }
    cout << decimal << endl;
}