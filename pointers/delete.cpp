// for dynamically memory allocation
#include<iostream>
#include<string>
using namespace std;
class krishn
{
    private:
    string name;
    int age;
    public:
    void setdata(string name1,int age1)
    {
        name=name1;
        age=age1;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

};
int main()
{ //array of abjects
    krishn *k1 = new krishn[2];
    k1->setdata("krishn kant kumar",21);
    k1->getname();
    k1->getage();
    (k1+1)->setdata("krishnkant",21);
    (k1+1)->getname();
    (k1+1)->getage();
    delete[] k1;
    return 0;
}