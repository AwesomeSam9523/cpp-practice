#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int arr[], int n);
void printArray(int arr[], int n);
void sort(int arr[], int n, int start);
void swap(int arr[], int a, int b);
bool isSorted(int arr[], int n);

int main() {
    int arr[10] = {3, 4, 2, 6, 7, 5, 1, 9, 10, 8};
    selectionSort(arr, 10);
    printArray(arr, 10);
    return 0;
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // using this helper function may prevent
        // some unnecessary iterations
        if (isSorted(arr, n)) {
            break;
        }
        sort(arr, n, i);
    }
}


void sort(int arr[], int n, int start) {
    int minimum = INT_MAX;
    int minIndex = 0;
    for (int i = start; i < n; i++) {
        int ele = arr[i];
        if (ele <= minimum) {
            minimum = ele;
            minIndex = i;
        }
    }
    swap(arr, start, minIndex);
}


void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
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
