#include<iostream>
#include<string>
using namespace std;
class base
{public:
    int x;
    int y;
    base()
    {
        cout<<"default constructor of base class called"<<endl;
    }

    base(int z, int a)
    {
        x=z;
        y=a;
        cout<<"parameterised constructor of base class called"<<endl;
    }
};

class derived : public base
{
    public:
    int x1;
    int y1;
    derived(): base()
    {
        cout<<"default constructor of derived class called"<<endl;
    }

    derived(int m, int n): base(m,n)
    {
        x1=m;
        y1=n;
        cout << "parameterised constructor of derived class called" << endl;
    }
};