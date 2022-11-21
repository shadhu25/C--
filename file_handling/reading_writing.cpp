#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ooo;
    ifstream oooo;
    char ch;
    ooo.open("krishn.txt");
    ooo<<"krishn";
    ooo.close();
    oooo.open("krishn.txt");
    while(!oooo.eof()){
        cout<<ch;
        oooo>>ch;
    }
    cout<<"\n";
    oooo.close();
    return 0;
}