#include <iostream>
using namespace std;

// void revrse(int arr[], int size)
// {
//      int start = 0;
//      int end = size - 1;

//      while (start <= end)
//      {
//           swap(arr[start],arr[end]);
//           start++;
//           end--;
//      }
// }

// void printarr(int arr[], int size)
// {
//      for (int i = 0; i < size; i++)
//      {
//           cout << arr[i];
//      }
// }

// int main()
// {
//      int arr[5] = {1, 2, 3, 4, 5};

//      revrse(arr, 5);

//      printarr(arr, 5);

//      return 0;
// }

void swapitem(int arr[], int size)

{
     int temp;
     int j = 0;
     while (j < size)
     {
          if (j + 1 < size)
          {
               // swap(arr[j+1], arr[j]);
               temp = arr[j + 1];
               arr[j + 1] = arr[j];
               arr[j] = temp;
          }
          j += 2;
     }
}

void printarray(int arr[], int size)
{
     for (int i = 0; i < size; i++)
     {
          cout << arr[i] << " ";
     }
}

int main()
{
     int arr[6] = {1, 2, 3, 4, 5, 6};

     int size = sizeof(arr) / sizeof(arr[0]);

     swapitem(arr, size);

     printarray(arr, size);

     return 0;
}