#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int i = 0;
    while (true)
    {
        int temp = arr[i];
        // cout << "swapping: " << temp << " at: " << i << endl;
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;

        i += 2;
        // cout << "new i: " << i << " with size: " << size << endl;
        if (i + 1 >= size)
        {
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    swapAlternate(arr, 11);
    printArray(arr, 11);
}
