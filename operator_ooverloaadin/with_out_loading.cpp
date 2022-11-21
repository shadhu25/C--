#include<iostream>
using namespace std;
class person
{
    private:
    int weight;
    public:
    person(int weight1=0)
    {
        weight=weight1;
    }
    int getdata()
    {
        return weight;
    }
    person adddata(person per1)
    {
        person temp;
        temp=weight+per1.getdata();
        return temp;
    }

};
int main()
{
    person p1(27),p2(23),total;
    //total=p1.adddata(p2);
    total=p2.adddata(p1);
    cout<<"total = "<<total.getdata()<<endl;
    return 0;
}