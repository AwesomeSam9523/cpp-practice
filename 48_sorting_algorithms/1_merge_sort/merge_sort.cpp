#include <iostream>
#include <climits>
using namespace std;

void mergeArr(int arr[], int l, int r) {
    // cout << "   - merging arrays now at l: " << l << " r: " << r << endl;
    // for (int i = l; i <= r; i++) cout << arr[i] << " ";
    // cout << endl;
    int size = r-l+1;
    int mid = (l + r)/2;
    int *output = new int[size];
    int s1 = l;
    int s2 = mid + 1;
    for (int i = 0, j = 0; i < size; i++) {
        int arrs1 = arr[s1];
        int arrs2 = arr[s2];
        if (s1 > mid) {
            arrs1 = INT_MAX;
        }
        if (s2 > r) {
            arrs2 = INT_MAX;
        }
        // cout << arrs1 << " vs " << arrs2 << "  at s1: " << s1 << " and s2: " << s2 << endl;

        if (arrs1 > arrs2) {
            output[i] = arr[s2];
            s2++;
        } else {
            output[i] = arr[s1];
            s1++;
        }
        // cout << " ===> ";
        // for (int i = 0; i < size; i++) cout << output[i] << " ";
        // cout << endl;
    }

    for (int i = 0; i < size; i++) {
        // cout << output[i] << " ";
        arr[l+i] = output[i];
    }
    cout << endl;
}

void mergeSort(int arr[], int l, int r) {
    // cout << "mS called l: " << l << " r: " << r << endl;
    // for (int i = l; i <= r; i++) cout << arr[i] << " ";
    // cout << endl;
    if (l == r) {
        // cout << "returning from mS with l: " << l << " and r: " << r << endl;
        return;
    }
    if (r-l == 1) {
        if (arr[l] > arr[r]) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
        }
        return;
    }
    // cout << endl;

    int mid = (l + r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    mergeArr(arr, l, r);
}

int main() {
    int arr[8] = {2, 13, 4, 1, 3, 6, 28, 0};
    mergeSort(arr, 0, 7);
    for (int i = 0; i < 8; i++) cout << arr[i] << " ";
    cout << endl;
}
