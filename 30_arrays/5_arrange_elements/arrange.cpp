#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void arrange(int arr[], int n)
{
    int frontIndex = 0;
    int backIndex = n - 1;
    for (int i = 1; i <= n; i++) {
        int index;
        if (i % 2 == 0) {
            index = backIndex;
            backIndex--;
        } else {
            index = frontIndex;
            frontIndex++;
        }
        cout << "index is: " << index << endl;

        arr[index] = i;
        printArray(arr, 6);
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    arrange(arr, 6);
}