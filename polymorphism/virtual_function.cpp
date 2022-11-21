#include<iostream>
#include<string>
using namespace std;

class base{
    public:
    //void output(){ this will call base class
    virtual void output(){ // this will call derived class because it is virtual function
        cout<<"base class"<<endl;
    }
};

class derived1:public base{
    public:
    void output(){
        cout<<"derived1 class"<<endl;
    }
};

class derived2:public base{
    public:
    void output(){
        cout<<"derived2 class"<<endl;
    }
};
int main()
{
    base *ptr= new derived1;
    ptr->output();
    ptr= new derived2;
    ptr->output();
    return 0;
}