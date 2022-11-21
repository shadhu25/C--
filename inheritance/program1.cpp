#include<iostream>
#include<string>
using namespace std;
class rectangle // parent class
{
    public:
    int length;
    int breadth;
    void area()
    {
        cout<<"area of rectangle :"<<length*breadth<<endl;
    }
};

class cuboid : public rectangle // child class
{
    public:
    int height;
    void volume()
    {
        cout<<"volume of cuboid :"<<length*breadth*height<<endl;
    }
};

int main()
{
    cuboid c;
    c.breadth=2; c.height=3; c.length=4;
    c.area(); c.volume();
    return 0;
}