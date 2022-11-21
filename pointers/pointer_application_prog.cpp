#include<iostream>
#include<string>
using namespace std;
class car
{
    private:
    int weight;
    public:
    void setdata(int a)
    {
        weight=a;
    }
    int getdata()
    {
        return weight;
    }
};

class BMW
{
    private:
    int TSpeed;
    car *ptr;
    public:
    void setdata(int a, int b)
    {
        ptr = new car;
        ptr->setdata(a);
        TSpeed=b;
    }
    void getdata()
    {
        cout<<"weight of BMW : "<<ptr->getdata()<<endl;
        cout<<"top speed of BMW : "<<TSpeed<<endl;
    }
    ~BMW()
    {
        delete ptr;
    }
};

int main()
{
    BMW C1;
    C1.setdata(150,1500);
    C1.getdata();
    return 0;
}