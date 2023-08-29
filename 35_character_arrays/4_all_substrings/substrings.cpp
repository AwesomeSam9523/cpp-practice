#include <iostream>
using namespace std;
#include <cstring>

void printSubstrings(char input[]);

int main() {
    char input[100] = "abc";
    printSubstrings(input);
    return 0;
}

void print(char input[], int start, int end) {
    int len = strlen(input);
    for (int j = start; j <= end; j++) {
        cout << input[j];
    }
}

void printSubstrings(char input[]) {
    int len = strlen(input);
    for (int i = 0; input[i] != '\0'; i++) {
        for (int j = i; j < len; j++) {
            print(input, i, j);
            cout << endl;
        }
    }
}
