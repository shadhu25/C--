// Write a C++ program to find the sum of all the elements in Array.
#include<iostream>
using namespace std;
int main()
{
    int var[6]={1,2,3,4,5,6},sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=var[i];
    }
    cout<<sum<<endl;
}