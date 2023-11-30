#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// this is finding unique element in an array
// int findunique(int arr[],int size)
// {
//      int ans=0;

//      for(int i=0;i<size;i++)
//      {
//           ans=ans^arr[i];
//      }
//      return ans;

// }

// int main()
// {
//      int arr[5]={1,1,2,2,4};
//      int size=5;

//      cout<<"The unique element is :"<<findunique(arr,size)<<endl;

//      return 0;
// }

// this is finding the occurence of an element in an array
void findoccur(int arr[], int n)
{
     vector<bool> visited(n, false);

     for (int i = 0; i < n; i++)
     {
          if (visited[i] == true)
          {
               continue;
          }
          int count = 1;
          for (int j = i + 1; j < n; j++)
          {
               if (arr[j] == arr[i])
               {
                    visited[j] = true;
                    count++;
               }
          }
          cout << arr[i] << " " << count << endl;
     }
}
int main()
{

     int arr[8] = {10, 10, 10, 20, 20, 20, 20, 30};

     int size = sizeof(arr) / sizeof(arr[0]);

     findoccur(arr, size);
}
