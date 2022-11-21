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
    derived()
    {
        cout<<"default constructor of derived class called"<<endl;
    }

    derived(int z, int a)
    {
        x1=z;
        y1=a;
        cout << "parameterised constructor of derived class called" << endl;
    }
};

int main()
{
    derived p1;// default constructor of base class called-> default constructor of derived class called
    derived p2(55,76);// default constructor of base class called-> parameterised costructor of derived class called
    return 0;
}