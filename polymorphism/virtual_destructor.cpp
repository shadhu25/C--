#include<iostream>
#include<string>
using namespace std;

class base{
    public:
    virtual void output(){ 
        cout<<"base class"<<endl;
    }
    virtual ~base(){
        cout<<"base class destructor"<<endl;
    }
};

class derived:public base{
    public:
    void output(){
        cout<<"derived class"<<endl;
    }
    ~derived(){
        cout<<"derived class destructor"<<endl;
    }
};

int main()
{
    base *ptr= new derived;
    delete ptr;
    return 0;
}