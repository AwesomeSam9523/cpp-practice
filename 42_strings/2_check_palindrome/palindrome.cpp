#include <iostream>
using namespace std;

bool checkPalindrome(string str); 

int main() {
    string palindrome;
    cin >> palindrome;
    bool res = checkPalindrome(palindrome);
    cout << res << endl;
    
    return 0;
}


bool checkPalindrome(string str) {
    int len = str.length();
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str.at(i) != str.at(j)) {
            return false;
        }
    }
    return true;
}

