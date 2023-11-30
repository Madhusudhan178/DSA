#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
     cout << "Printing the array" << endl;
     for (int i = 0; i < size; i++)
     {
          cout << arr[i] << " ";
     }
     cout << "Printing done" << endl;
}
int main()
{
     int arr[15];// declaring an array with variable arr of size 15
     // accessing the fist array
     // cout << "Value at index 0" << arr[14] << endl;
     // Initalizing an array
     int second[3] = {5, 7, 11};
     // accessing an array
     cout << "Values at 2nd index: " << second[2] << endl;

     int third[15] = {2, 7};

     // array_name[ numbr];
     for (int i = 0; i < 4; i++)
     {
          cout << third[i] << " " << endl;
     }
     int size;
     int array[size];
     cout<<"Enter the size of an array"<<endl;
     cin>>size;

     for(int i=0;i<size;i++)
     {
          cout<<array[i]<<" ";
     }
     printArray(arr, 15);

     char ch[5] = {'a', 'b', 'c', 'd'};

     return 0;
}