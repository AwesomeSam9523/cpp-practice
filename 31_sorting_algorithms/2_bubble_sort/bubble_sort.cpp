#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void sort(int arr[], int n);
void swap(int arr[], int index);
void printArray(int arr[], int n);
bool isSorted(int arr[], int n);

int main() {
    int arr[10] = {3, 4, 2, 6, 7, 5, 1, 9, 10, 8};
    bubbleSort(arr, 10);
    printArray(arr, 10);
    return 0;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // using this helper function may prevent
        // some unnecessary iterations
        if (isSorted(arr, n)) {
            break;
        }
        sort(arr, n - i - 1);
    }
}


void sort(int arr[], int j) {
    for (int start = 0; start < j; start++) {
        int ele1 = arr[start];
        int ele2 = arr[start + 1];

        if (ele1 > ele2) {
            swap(arr, start);
        }
    }
}


void swap(int arr[], int index) {
    int temp = arr[index];
    arr[index] = arr[index + 1];
    arr[index + 1] = temp;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}
