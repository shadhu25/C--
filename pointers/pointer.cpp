#include<iostream>
#include<string>
using namespace std;

int main()
{
    int var=10;
    int *ptr=NULL;
    ptr=&var;
    cout<<"ptr  : "<<ptr<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"&var : "<<&var<<endl;
    cout<<"var  : "<<var<<endl;
    return 0;
}