#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[]);

int main() {
    char input1[] = "abc";
    char input2[] = "abcc";
    bool result = isPermutation(input1, input2);
    cout << result << endl;
    return 0;
}

bool isPermutation(char input1[], char input2[]) {
    int finalSum = 0;
    for (int i = 0;; i++) {
        if (
            (input2[i] == '\0' && input1[i] != '\0') ||
            (input2[i] != '\0' && input1[i] == '\0')
        ) {
            return false;
        }
        finalSum += input1[i] - input2[i];
    }
    if (finalSum == 0) {
        return true;
    } else {
        return false;
    }
}
