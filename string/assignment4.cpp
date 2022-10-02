//Write a program to compare if the two strings entered by user are equal or not ( length ).
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string uu,uuu;
    cout<<"please enter first string: ";
    cin>>uu;
    cout<<"please enter second string: ";
    cin>>uuu;
    int luu,luuu;
    luu=uu.length();
    luuu=uuu.length();
    if(luu==luuu)
    cout<<"they are equal"<<endl;
    else
    cout<<"they are not equal"<<endl;
    return 0;
}