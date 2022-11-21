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
    friend class beta;
};

class beta{
    private:
    int b1;
    public:
    beta(int b=0)
    {
        b1=b;
    }
    void fun(){
        alpha al1(44);
        cout<<"a1+b1 : "<<al1.a1+b1<<endl;
    }
};
int main()
{
    beta be1(44);
    be1.fun();
    return 0;
}