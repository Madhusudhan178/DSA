#include<bits/stdc++.h>
using namespace std;

int fun(int number,int arr[])
{
     int counter=0;
     for(int i;i<5;i++)
     {
          if(arr[i]==number)
               counter++;
     }
     return counter;
}
int main()
{
     //HOW MANY IT APPEARS an ELEMENT BRUTE FORCE
     int n;
     cout<<"ENTER THE value :"<<endl;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }


     int hash[13]={0};
     for(int i=0;i<n;)
     int q;
     cin>>q;
     while(q--)
     {
          int number;
          cin>>number;
          //fetch
     }




     return 0;
}