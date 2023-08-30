#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[]);

int main() {
    char input1[100];
    char input2[100];
    cin >> input1 >> input2;
    bool result = isPermutation(input1, input2);
    cout << result << endl;
    return 0;
}

bool isPermutation(char input1[], char input2[]) {
    int finalSum = 0;
    bool one = false, two = false;
    for (int i = 0;; i++) {
        // cout << i << " " << input1[i] << " " << input2[i] << endl;

        if (input1[i] == '\0') {
            one = true;
        }
        if (input2[i] == '\0') {
            two = true;
        }
        if (one && two) {
            break;
        }
        finalSum += input1[i] - input2[i];
    }

    if (finalSum == 0) {
        return true;
    } else {
        return false;
    }
}
