#include<bits/stdc++.h>
using namespace std;

int main()
{
     //Declaring the vectors
     vector<int>v;
     v.push_back(10);
     v.emplace_back(15);

     vector<pair<int,int>>z;
     z.push_back({1,3});
     z.emplace_back(9,10);

     vector<int> arr(5,100);// even if i try to add it increase the size of vector[Dynamic in nature].

     vector<int> s(5);

     vector<int> s1(s);

     //Access the vectors
     cout<<arr[0]<<" " <<arr[1]<<" "<<arr[2]<<" "<<arr[6]<< " "<<arr.at(3);






     return 0;
}