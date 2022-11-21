#include<iostream>
#include<string>
using namespace std;
class alpha{
    private:
    int a1;
    public:
    alpha(int a=0)
    {
        a1=a;
    }
    friend void fun();
};

class beta{
    private:
    int b1;
    public:
    beta(int b)
    {
        b1=b;
    }
    friend void fun();
};

void fun() // Friend function connecting two class or more( act as bridge ).
{
    alpha alpha1(8);
    beta beta1(2);
    int x=alpha1.a1+beta1.b1;
    cout<<"alpha1.a1+beta1.b1 : "<<x<<endl;
}
int main()
{
    fun();
    return 0;
}