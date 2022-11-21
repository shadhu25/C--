#include<iostream>
#include<string>
using namespace std;

int main()
{
    int var[10]={10,20,30,40,50,60,70,80,90,100};
    int *ptr=var; // also var[0]
    // printing value by pointer
    for(int i=0;i<10;i++)
    {
        cout<<"var["<<i+1<<"] : "<<*(ptr+i)<<endl; // also var[i]
    }
    return 0;
}