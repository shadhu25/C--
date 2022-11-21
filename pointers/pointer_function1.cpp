#include<iostream>
#include<string>
using namespace std;
void squar(int *ptr)
{
    int temp;
    temp=*ptr;
    temp=temp*temp;
    *ptr=temp;
}
int main()
{
    int var=10;
    squar(&var);
    cout<<"var : "<<var<<endl;
    return 0;
}