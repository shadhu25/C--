#include<iostream>
using namespace std;
class krishn
{
    private:
    int age;
    public:
    krishn(int x)// constructors
    {
        age=x;
    }
    int getdata()
    {
        cout<<age<<endl;
    }
};

int main()
{
    krishn age(21);
    age.getdata();
    return 0;
}