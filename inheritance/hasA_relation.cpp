#include<iostream>
#include<string>
using namespace std;
// hasA relation between class vegetable, fruit, salad 
class fruit
{
    public:
    string F1;
    string F2;
    string F3;
    string F4;
    fruit()
    {
        F1="orange";
        F2="apple";
        F3="mango";
        F4="banana";
    }
};

class vegitable 
{
    public:
    string V1;
    string V2;
    string V3;
    string V4;
    vegitable()
    {
        V1="radish";
        V2="cabbage";
        V3="onion";
        V4="cucumber";
    }
};

class salad
{
    private:
    fruit f;
    vegitable v;
    public:
    void make_salad()
    {
        cout<<"salad = "<<f.F1<<" "<<v.V3<<" "<<f.F2<<" "<<v.V4<<" "<<f.F3<<" "<<v.V1<<endl;
    }
};

int main()
{
    salad s;
    s.make_salad();
    return 0;
}