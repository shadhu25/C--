// Write a program in C++ to find the sum of first 10 natural numbers. ( using While Loop )
#include<iostream>
using namespace std;
int main()
{
    int n=10,sum=0,i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"the total sum is : "<<sum<<endl;
}