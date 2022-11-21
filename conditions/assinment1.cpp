//Write a program in C++ that take a number as input & check whether number is Odd or Even.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"please enter a number :";
    cin>>number;
    if(number%2==0)
    cout<<"it is even number"<<endl;
    else
    cout<<"it is odd number"<<endl;
    return 0;
}