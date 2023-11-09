/*
3

*
*1*
*121*
*12321*
*121*
*1*
*

*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < 2*n + 1; i++) {
		cout << "*";
		int i2 = i;
		if (i > n) {
			i2 = 2*n - i;
		}
		for (int j = 1; j <= i2; j++) {
			cout << j;
		}
		for (int j = i2 - 1; j >= 1; j--) {
			cout << j;
		}
		if (i2 != 0)
			cout << "*";
		cout << endl;
	}
	return 0;
}
