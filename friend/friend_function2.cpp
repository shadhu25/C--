#include<iostream>
#include<string>
using namespace std;
class alpha{
    private:
    int a1;
    public:
    alpha(int a=0)
    {
        a1=a;
    }
    friend void fun1();
};

class beta{
    private:
    int b1;
    public:
    beta(int b)
    {
        b1=b;
    }
    friend void fun2();
};

void fun1()
{
    alpha alpha1(8);   
    cout<<"alpha1.a1 : "<<alpha1.a1<<endl;
}

void fun2(){
    beta beta1(3);
    cout<<"beta1.b1 : "<<beta1.b1<<endl;
}
int main()
{
    fun1();
    fun2();
    return 0;
}