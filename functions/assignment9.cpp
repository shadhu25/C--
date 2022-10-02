#include<iostream>
using namespace std;
void findeven_odd(int);
int main()
{
    int v;
    cout<<"please enter a integer"<<endl;
    cin>>v;
    findeven_odd(v);
    return 0;
}

void findeven_odd(int x)
{
    if(x%2==0)
    cout<<"the number is even"<<endl;
    else
    cout<<"the number is odd"<<endl;
}