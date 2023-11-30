#include <iostream>
using namespace std;

// INTERSECTION
//  int main()
//  {
//       int i, j = 0;
//       int n = 5, m = 3;
//       int arr1[] = {1, 2, 3, 4, 5};
//       int arr2[] = {2, 2, 3};

//       while ((i < n && j < m))

//      {
//           std::vector<int> ans;
//           
//           if (arr1[i] == arr2[j])
//           {
//                ans.push_back(arr1[i]);
//           }
//           else if (arr1[i] < arr2[j])
//           {
//                i++;
//           }
//           else
//           {
//                j++;
//           }
//      }
//      return 0;
// }

// PAIR SUM
int main()

{
     for (int i = 0; i < 6; i++)
     {
          // cout << "i started:";
          cout << i << " ";
          for (int j = i + 1; j < 6; j++)
          {
               // cout << "j started:";
               cout << j << " ";
               for (int k = j + 1; k < 6; k++)
               {
                    // cout << "k started:";
                    cout << k << " ";
               }
               cout << "k is finished" << endl;
          }
          cout << " j is finished" << endl;
          cout << endl;
     }
     cout << " i is finished" << endl;
     cout << endl;

     return 0;
}