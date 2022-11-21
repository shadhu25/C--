// Write a C++ Program to implement Pre And Post Decrement operator.
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
    person operator -- ()
    {
        --weight1;
    }
    person operator -- (int)
    {
        weight2--;
    }
};
int main()
{
    person p1(66,77);
    --p1;
    p1--;
    cout<<p1.getdata1()<<endl;
    cout<<p1.getdata2()<<endl;
    return 0;
}