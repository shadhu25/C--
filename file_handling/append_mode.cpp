#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream oooo;
    oooo.open("krishn.txt",ios::app);
    oooo<<"academy";
    oooo.close();
    return 0;
}