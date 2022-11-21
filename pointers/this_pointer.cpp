#include<iostream>
#include<string>
using namespace std;
class person
{
    private:
    string name;
    int age;
    public:
    person(string name, int age)
    {
        this->name=name; // this pointer
        this->age=age;
    }
    void getdata()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
    }
};
int main()
{
    person p("krishnkant",21);
    p.getdata();
    return 0;
}