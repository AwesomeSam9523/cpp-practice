#include <iostream>
using namespace std;

void printArray(bool arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   int maxCandies = 0;
   for (int i = 0; i < n; i++) {
      int candies = arr[i];
      if (candies > maxCandies) {
         maxCandies = candies;
      }
   }
   cout << maxCandies << endl;

   for (int i = 0; i < n; i++) {
      int candies = arr[i];
      if (candies + extraCandies > maxCandies) {
         output[i] = true;
      } else {
         output[i] = false;
      }
   }
}

int main()
{
    int arr[19] = {11, 14, 23, 16, 23, 13, 12, 19, 16, 17, 25, 27, 17, 13, 12, 20, 23, 28, 21};
    bool output[19] = {false};
    maximum_candy(19, arr, 0, output);
    printArray(output, 19);
}
