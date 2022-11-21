#include<iostream>
#include<string>
using namespace std;
// isA relation between display1 and display2
class display1
{
    public:
    void iron()
    {
        cout<<"iron man"<<endl;
    }
    void Avengers()
    {
        cout<<"Avengers"<<endl;
    }
};

class display2: public display1
{
    public:
    void iron()
    {
        cout<<"iron man 2"<<endl;
    }
    void Avengers()
    {
        cout<<"Avengers 2"<<endl;
    }
    void ant()
    {
        cout<<"ant man"<<endl;
    }
};

int main()
{
    display2 dis;
    dis.iron();
    dis.Avengers();
    dis.ant();
    return 0;
}