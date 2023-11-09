#include <iostream>
using namespace std;

void printArray(int input[], int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
}

void swapElements(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partitionArray(int input[], int start, int end) {
    int x = input[start];
    int lesserElements = 0;
    for (int i = start + 1; i <= end; i++) {
        if (input[i] <= x) lesserElements++;
    }
    int x_index = start + lesserElements;
    swapElements(input, start, x_index);
    int i = start, j = end;

    while (i < x_index && x_index < j) {
        int iEle = input[i], jEle = input[j];
        if (iEle <= x) {
            i++;
        } else if (jEle > x) {
            j--;
        } else {
            swapElements(input, i, j);
            i++;
            j--;
        }
    }

    return start + lesserElements;
}

void quickSort(int input[], int start, int end) {
    cout << "quickSort from " << start << " to " << end << endl;
	if (end <= start) {
        return;
    }
    int partitionIndex = partitionArray(input, start, end);
    quickSort(input, start, partitionIndex - 1);
    quickSort(input, partitionIndex + 1, end);
}

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, size - 1);
    printArray(arr, 0, size - 1);
    return 0;
}
