// Write a program in C++ to find the sum of first 10 natural numbers. ( using do while loop )
#include<iostream>
using namespace std;
int main()
{
    int n=10,sum=0,i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    cout<<"the total sum is : "<<sum<<endl;
}