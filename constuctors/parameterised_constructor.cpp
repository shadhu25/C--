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
    detail(string a_name,int a_age, string a_address)// parameterised constructors
    {
        name=a_name;
        age=a_age;
        address=a_address;
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
    krishn.getdata();   
    return 0;
}