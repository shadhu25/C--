// how to pass array into function with pointer
#include<iostream>
#include<string>
using namespace std;
void print(int *var)
{
    for(int i=0;i<5;i++)
    {
        cout<<"var "<<i+1<<" : "<<*(var+i)<<endl;
    }
}
int main()
{
    int var[5]={10,20,30,40,50};
    print(var);
    return 0;
}