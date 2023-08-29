#include <iostream>
using namespace std;

void reverseEachWord(char input[]);;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
    return 0;
}

void reverseEachWord(char input[]) {
    int start = 0;
    int i = 0;
    while (input[i] != '\0') {
        if (input[i+1] == ' ' || input[i+1] == '\0') {
            // cout << "at index " << i << " next char is '" << input[i+1] << "'" << endl;
            for (int j = i; start < j; start++, j--) {
                char temp = input[start];
                // cout << "i: " << start << " j: " << j << " switching " << temp << " with " << input[j] << endl;
                input[start] = input[j];
                input[j] = temp;
            }
            start = i + 2;
        }
        i++;
    }
}
