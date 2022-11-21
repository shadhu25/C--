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
    detail(string a_name="NULL",int a_age=0, string a_address="hajipur")// parameterised constructors
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
    detail krishn,krishn1("krishn ksnt,21,hajipur");
    krishn.getdata();   
    krishn1.getdata();
    return 0;
}