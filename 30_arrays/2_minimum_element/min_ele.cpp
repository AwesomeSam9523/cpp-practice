#include <iostream>
#include <climits>
using namespace std;

int main() {
	int array[100000];
    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> array[i];
    }

    int min = INT_MAX;
    for (int i = 1; i < n; i++) {
        int ele = array[i];
        if (min > ele) {
            min = ele;
        }
    }
    cout << min << endl;
}
