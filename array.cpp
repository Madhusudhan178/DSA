#include<bits/stdc++.h>
using namespace std;

int main()
{
     int ar[] {0,20,50,60,90};
     int arr[5];
     for(int i=0;i<5;i++)
     {
          double a=arr[i];
          cout<<&a<<" - ";
          cout<<a<<endl;
     }


     return 0;
}