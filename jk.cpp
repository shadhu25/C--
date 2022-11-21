#include<iostream>
using namespace std;
class person
{
    private:
    int weight1;
    int weight2;
    public:
    person(int weighty=0,int weightx=0)
    {
        weight1=weighty;
        weight2=weightx;
    }
    int getdata1()
    {
        return weight1;
    }
    int getdata2()
    {
        return weight2;
    }
};
int main()
{
    person p3={65,87};
    cout<<p3.getdata1()<<endl;
    cout<<p3.getdata2()<<endl;
     
    return 0;
}