#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a number to check prime or not" << endl;
    cin >> n;
    int count=0;
    for( int i=2;i<n/2 ; i++)
    {
        if(n%i == 0)
        {
            count +=1;

        }
        
    }
    if(count == 0)
    {
        cout<< n<< " is a prime number:";
    }
    else{
        cout<< n<< " is a composite number";
    }



}