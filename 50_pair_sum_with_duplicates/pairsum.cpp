#include <algorithm>
#include <iostream>
using namespace std;

int binarySearch(int* arr, int toFind, int si, int ei) {
	if (si > ei)
		return -1;
	int mid = (si + ei)/2;
	int ele = arr[mid];
	if (ele == toFind) {
		return mid;
	} else if (ele > toFind) {
		return binarySearch(arr, toFind, si, mid - 1);
	} else {
		return binarySearch(arr, toFind, mid + 1, ei);
	}
}

int pairSum(int *arr, int n, int num)
{
	sort(arr, arr+n);
	int pairs = 0;
	for (int i = 0; i < n; i++) {
		// cout << "pairs: " << pairs << " i: " << i << endl;
		int ele = num - arr[i];
		int index = binarySearch(arr, ele, i+1, n-1);
		// cout << "bs returned with " << index << endl;
		if (index == -1)
			continue;
		pairs++;
		int j = index;
		while (arr[index+1] == ele) {
			// cout << "++ at index " << (index+1) << endl;
			pairs++;
			index++;
		}
		while (arr[j-1] == ele && j-1 != i) {
			// cout << "++ at j " << (j-1) << endl;
			pairs++;
			j--;
		}
	}
	return pairs;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    int pairs = pairSum(arr, n, t);
    cout << pairs << endl;
}