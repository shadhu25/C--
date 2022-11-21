/*
    Write a program, to check Grade in Exam using marks out of 100.

    if marks greater than and equal to 80 -> "A"

    if marks greater than and equal to 60, but less than 80 -> "B"

    if marks less than 60 -> "C"
*/
#include<iostream>
using namespace std;
int main()
{
    int marks=0;
    cout<<"please enter your marks: ";
    cin>>marks;

    if(marks>=80&&marks<=100)
    {
        cout<<"A"<<endl;
    }
    else if(marks>=60&&marks<80)
    {
        cout<<"B"<<endl;
    }
    else if(marks<60)
    {
        cout<<"C"<<endl;
    }
    else 
    {
        cout<<"invalid input"<<endl;
    }
    return 0;
}