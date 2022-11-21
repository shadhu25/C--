#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ifstream oooo;
    oooo.open("krishn.txt");
    while(!oooo.eof())
    {
        cout<<ch;
        oooo>>ch;
    }
    cout<<"\n";
    oooo.close();
    return 0;
}