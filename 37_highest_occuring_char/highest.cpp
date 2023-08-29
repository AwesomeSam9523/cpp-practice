#include <iostream>
using namespace std;

char highestOccurringChar(char input[]);

int main() {
    char input[100] = "aansudnasaanc";
    char highest = highestOccurringChar(input);
    cout << highest << endl;
    return 0;
}


int count(char input[], char letter) {
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == letter) {
            count++;
        }
    }

    return count;
}

bool isDone(char done[], char letter) {
    for (int i = 0; i < 100; i++) {
        if (done[i] == letter) {
            return true;
        }
    }
    return false;
}

char highestOccurringChar(char input[]) {
    int maxCount = 0;
    char done[100];
    int doneCount = 0;
    char letter;

    for (int i = 0; input[i] != '\0'; i++) {
        char t = input[i];
        if (isDone(done, t)) {
            // cout << t << " is done." << endl;
            continue;
        }
        int c = count(input, input[i]);
        if (c > maxCount) {
            maxCount = c;
            letter = input[i];
        }
        done[doneCount] = t;
        doneCount++;
    }

    return letter;
}