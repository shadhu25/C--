#include<iostream>
#include<string>
using namespace std;
class detail
{
    private:
    string name;
    int age;
    string address;
    public:
    detail(string a_name,int a_age, string a_address)// parameterised constructor
    {
        name=a_name;
        age=a_age;
        address=a_address;
    }
    detail(detail &krishn)//copy constructor
    {
        name=krishn.name;
        age=krishn.age;
        address=krishn.address;
    }
    void getdata()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<address<<endl;
    }
};
int main()
{
    detail krishn("krishna kant",21,"hajipur");
    detail krishn1(krishn);
    krishn.getdata();   
    krishn1.getdata();
    return 0;
}