#include<iostream>
using namespace std;
int main()
{
    char var;
    cout<<"please enter your character : ";
    cin>>var;
    if(var<='Z'&&var>='A')
    cout<<"the character is in uppercase"<<endl;
    else
    cout<<"the character is in lowercase"<<endl;
}