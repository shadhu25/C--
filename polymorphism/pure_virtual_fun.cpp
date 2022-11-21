#include<iostream>
#include<string>
using namespace std;

class base{ //abstract class
    public:
    
    virtual void give()=0;// pure virtual function
};

class girl:public base{
    public:
    void give(){
        cout<<"pink cake"<<endl;
    }
};

class boy:public base{
    public:
    void give(){
        cout<<"brown cake"<<endl;
    }
};
int main()
{
    base *ptr= new girl;
    ptr->give();
    ptr= new boy;
    ptr->give();
    return 0;
}