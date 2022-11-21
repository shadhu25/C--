#include<iostream>
using namespace std;
int main(){
    int num1,num2,total;
    cout<<"Enter the numbers : ";
    cin>>num1>>num2;
    try
    {
        if(num2==0){
            throw num2;
        }
        else{
            total=num1/num2;
            cout<<"total is : "<<total<<endl;
        }
    }
    catch(...) // default catch block
    {
        cout<<"error occured"<<endl;
    }
    
    return 0;
}