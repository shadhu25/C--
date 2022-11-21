#include<iostream>
#include<string>
using namespace std;
class static_variable{
    private:
    int a,b;
    public:
    static_variable(){
        a=5;
        b=5;
        stat++;
    }
    static int stat;// static member variable
};
int static_variable::stat=0;

int main()
{
    static_variable v1,v2;
    //different ways of accessing static member variable
    cout<<"using v1 object : "<<v1.stat<<endl;
    cout<<"using v2 object : "<<v2.stat<<endl;
    cout<<"using class : "<<static_variable::stat<<endl;
    return 0;
}