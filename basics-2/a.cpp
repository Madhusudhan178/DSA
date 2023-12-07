#include <bits/stdc++.h>

using namespace std;
int main()
{
     pair<int, int> p = {1, 3};
     cout << p.first << " " << p.second;

     pair<int, pair<int, int>> q = {1, {2, 5}};
     cout << q.first << " " << q.second.first << " " << q.second.second<<endl;

     pair<int,int> arr[]={{1,2},{4,5},{5,6}};
     cout<<arr[0].first<<arr[1].second;
     

     return 0;
}