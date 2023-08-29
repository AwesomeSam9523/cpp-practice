#include <iostream>
using namespace std;

bool checkPalindrome(char arr[]);

int main() {
    char arr[1000000];
    cin >> arr;
    bool ans = checkPalindrome(arr);
    cout << ans << endl;
    return 0;
}

int length(char arr[]) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }

    return length;
}

bool checkPalindrome(char arr[]) {
    int len = length(arr);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char a = arr[i], b = arr[j];
        if (a != b) {
            return false;
        }
    }
    return true;
}
