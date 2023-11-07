#include <iostream>
using namespace std;

int getMax(int arr[], int size)

{
     int max = INT_MIN;
     cout<<max;

     for (int i = 0; i < size; i++)
     {
          if (arr[i] > max)
          {
               max = arr[i];
          }
     }
     return max;
}

int getMin(int arr[], int size)

{
     int min = INT_MAX;

     for (int i = 0; i < size; i++)
     {
          if (arr[i] < min)
          {
               min = arr[i];
          }
     }
     return min;
}

// void array(int arr[], int size)
// {
//      for (int i = 0; i < size; i++)
//      {
//           cin >> arr[i];
//      }
// }

int main()
{
     int size;
     int arr[size];
     cin >> size;
     for (int i = 0; i < size; i++)
     {
          cin >> arr[i];
     }

     // array(arr, size);

     cout << "The maximum value in a array is:" << getMax(arr, size) << endl;
     cout << "The minimum value in a array is:" << getMin(arr, size) << endl;

     return 0;
}

///

////