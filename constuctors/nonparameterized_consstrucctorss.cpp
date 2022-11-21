#include<iostream>
#include<string>
using namespace std;
class very
{
    private:
    string name;
    int age;
    string address;
    public:
    very()// nopn parameterised constructor
    {
        name="NULL";
        age=0;
        address="NULL";
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
    very krishn;
    krishn.getdata();   
    return 0;
}