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
    person operator + (person per1)
    {
        person temp;
        temp.weight1=weight1+per1.getdata1();
        return temp;
    }

};
int main()
{
    person p1(27),p2(23),total;
    total=p1+p2;
    cout<<"total = "<<total.getdata1()<<endl;
    person p3={65,87};
    cout<<p3.getdata1()<<endl;
    cout<<p3.getdata2()<<endl;
     
    return 0;
}