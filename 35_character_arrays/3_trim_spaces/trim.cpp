#include <iostream>
using namespace std;

void trimSpaces(char input[]);

int main() {
    char input[100];
    cin.getline(input, 100);
    trimSpaces(input);
    cout << "'" << input  << "'" << endl;
    return 0;
}


void shiftUntil(char input[], int index) {
    int i = index;
    for (; input[i+1] != '\0'; i++) {
        input[i] = input[i+1];
    }
    input[i] = '\0';
}


void trimSpaces(char input[]) {
    for (int i = 0; input[i] != '\0'; i++) {
        // cout << "'" << input  << "'" << endl;
        if (input[i] == ' ') {
            while (input[i] == ' ') {
                // cout << "shift" << endl;
                shiftUntil(input, i);
            }
        }
    }
}
