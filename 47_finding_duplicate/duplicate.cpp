#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            return arr[i];
        }
	}
	return -1;
}

int main() {
    int size;
    cin >> size;
    vector<int> v(size);

    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    int dupe = findDuplicate(v, size);
    cout << dupe << endl;
}
