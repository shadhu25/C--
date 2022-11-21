// how to pass array into function without pointer
#include<iostream>
#include<string>
using namespace std;
void print(int var1[])
{
    for(int i=0;i<5;i++)
    {
        cout<<"var "<<i+1<<" : "<<var1[i]<<endl;
    }
}
int main()
{
    int var[5]={10,20,30,40,50};
    print(var);
    return 0;
}