#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
    string str;
    getline(cin, str);
    cout << countWords(str) << endl;
}

int countWords(string str) {
	int words = 0;
	for (char ch: str) {
		if (ch == ' ') {
			words++;
		}
	}
	return words + 1;
}
