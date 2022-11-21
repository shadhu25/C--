// Write a program, to return largest number in array.
#include<iostream>
using namespace std;
int main()
{
    int var[6]={1,2,3,4,5,6},lar=0;
    for(int i=0;i<6;i++)
    {
        if(lar<var[i])
        {
            lar=var[i];
        }

    }
    cout<<lar<<endl;
}