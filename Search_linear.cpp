#include <iostream>
using namespace std;

bool isfound(int arr[], int key, int size)
{
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == key)
          {
               return 1;
          }
     }
     return 0;
}

int main()
{
     int key, size;
     size = 10;
     int arr[10] = {10, 20, 30, 40, -50, 60, 15, 14, 22, 80};
     cout << "Enter the value of key :" << endl;
     cin >> key;

     int found = isfound(arr, key, size);

     if (found)
     {
          cout << "key is present" << endl;
     }
     else
     {
          cout << "Key is not preset" << endl;
     }
}