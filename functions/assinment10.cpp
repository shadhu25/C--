// Write a C++ Program to find number is Armstrong or not. ( using function )
#include<iostream>
using namespace std;
void armstrong();
int main()
{
    armstrong();
    return 0;
}

void armstrong()
{
    int number,count=0,x,crt,rem,mul=1,result=0;
    cout<<"enter the number\n";
    cin>>number;
    x=number;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
        x=number;
        crt=count;
        while(x!=0)
        {
            rem=x%10;
            while(crt!=0)
            {
                mul=mul*rem;
                crt--;
            }
            result=result+mul;
            crt=count;
            x=x/10;
            mul=1;
        }
        if(result==number)
        cout<<number<<" is an armstrong number\n";
        else
        cout<<number<<" is not an armstrong number\n";

}