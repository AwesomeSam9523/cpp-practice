#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);
void sort(int arr[], int n, int start);
void swap(int arr[], int a, int b);
int kthSmallest(int arr[], int n, int k);
bool isSorted(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[] = {3, 2, 11, 5, 1};
    // 1 2 3 5 11
    int smallest = kthSmallest(arr, 5, 2);
    printArray(arr, 5);
    cout << smallest << endl;
    return 0;
}

int kthSmallest(int arr[], int n, int k)
{
    // we will sort using selection sort as
    // its time complexity is better than bubble sort
    selectionSort(arr, n);
    return arr[k-1];
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (isSorted(arr, n)) {
            break;
        }
        sort(arr, n, i);
    }
}


void sort(int arr[], int n, int start) {
    int minimum = arr[start];
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

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
