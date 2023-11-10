#include <iostream>
using namespace std;

void replacePi(char* input) {
    if (input[0] == '\0' || input[1] == '\0') {
        return;
    }

    if (input[0] == 'p' && input[1] == 'i') {
        int len = 0;
        for (; input[len] != '\0'; len++) {}
        
        for (int i = len+2; i > 1; i--) {
            input[i] = input[i-2];
        }

        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        return replacePi(input + 4);
    }
    replacePi(input + 1);
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
    return 0;
}
