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
    }

    static int static_function(){ // static member function
        stat++;
        return stat;
    }
    static int stat; // static member variable
};
int static_variable::stat=0;

int main()
{
    static_variable v1,v2;
    v1.static_function();
    cout<<"stat : "<<v1.stat<<endl;
    cout<<"stat : "<<v2.stat<<endl;
    v1.static_function();
    cout<<"stat : "<<v1.stat<<endl;
    cout<<"stat : "<<v2.stat<<endl;
    return 0;
}