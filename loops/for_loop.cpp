// Write a program in C++ to find the sum of first 10 natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n=10,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"the total sum is : "<<sum<<endl;
}