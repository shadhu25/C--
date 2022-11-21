#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ooo;
    ifstream oooo;
    char ch;
    int pos;
    ooo.open("krishn.txt");
    pos=ooo.tellp();
    cout<<pos<<endl;
    ooo<<"krishn";
    pos=ooo.tellp();
    cout<<pos<<endl;
    ooo<<"kant";
    pos=ooo.tellp();
    cout<<pos<<endl;
    ooo<<"kumar";
    pos=ooo.tellp();
    cout<<pos<<endl;
    ooo.close();
    int pos2;
    oooo.open("krishn.txt");
    while(!oooo.eof()){
        pos2=oooo.tellg();
        cout<<pos2;
        cout<<ch;
        oooo>>ch;
    }
    cout<<"\n";
    oooo.close(); 
    return 0;
}