#include<iostream>
#include<string>
using namespace std;
class base
{public:
    int x;
    int y;
    base()
    {
        cout<<"default constructor called"<<endl;
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

};

int main()
{
    derived p1;
    // derived p2(23,45);  If we don't specify a constructor, then derived class will use appropriate constructor from baseclass. ( Applicable only to Default Constructor )
    return 0;
}