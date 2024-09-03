#include<iostream>
using namespace std;
int main()
{
    int f=5;
    int fact =1;
    for(int i=f;i>=2;i--)
    {
        fact=fact * i;
       
    }
    cout<< fact;
}