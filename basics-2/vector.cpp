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
     cout<<arr[0]<<" " <<arr[1]<<" "<<arr[2]<<" "<<arr[6]<< " "<<arr.at(3)<<endl;

     //Other ways
    
     for(vector<int>::iterator z=arr.begin();z != arr.end();z++){
          cout<<*(z)<<" ";
     }
     cout<<endl;
     for(auto it=arr.begin();it<arr.end();it++){
          cout<<*(it)<<" ";
     }
     cout<<endl;
     for(auto it:arr){
          cout<<it<<" ";
     }
     cout<<endl;
     //{10,20,12,23}
     arr.erase(arr.begin()+1);
     //{10,20,12,23,25}
     arr.erase(arr.begin()+2,v.begin()+4);//{10,20,35}[start,end]

     //insert             
     vector<int>v(2,100);//{100,100}
     v.insert(v.begin(),300);//{300,100,100}
     v.insert(v.begin()+1,2,10);//{300,10,10,100,100}
     //v.size()
     //v.pop_back();//pop last element
     //v1.swap(v2);



     return 0;
}