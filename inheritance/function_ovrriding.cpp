#include<iostream>
#include<string>
using namespace std;
// Function Overriding
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
        //display1::iron(); // for calling base class functions
    }
    void Avengers()
    {
        cout<<"Avengers 2"<<endl;
        //display1::Avengers();// for calling base class functions
    }
};
int main()
{
     display2 dis;
    dis.iron();
    dis.Avengers();

    return 0;
}