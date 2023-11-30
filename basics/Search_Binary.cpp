#include <iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
     int start = 0;
     int end = size - 1;
     int mid = (start + end) / 2;

     while (start <= end)
     {
          if (arr[mid] == key)
          {
               return mid;
          }
          else if (key > arr[mid])
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
          mid = (start + end) / 2;
     }
     return -1;
}
int main()

{
     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int size = 10;
     int key=10;
     cout << "The index is:" << binary(arr, size, key) << endl;

     return 0;
}