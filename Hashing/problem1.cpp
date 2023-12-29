#include<bits/stdc++.h>
using namespace std;
int fun(int number,int a[])
{
     int counter=0;
     for(int i;i<5,i++)
     {
          if(a[i]==number)
          {
               counter++;
          }
     }

     return counter;
}
int main()
{
     //HOW MANY IT APPEARS an ELEMENT BRUTE FORCE
     int number;
     cout<<"ENTER THE value :"<<endl;
     cin>>number;
     int arr[5]={1,2,1,3,2};
     cout<<"IT apperars "<<fun(number,arr[5])<<"int the given array"<<endl;s




     return 0;
}