#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char A[20]="i am iron man";
    ofstream oooo;
    oooo.open("krishn.txt");
    oooo.seekp(5,ios_base::beg);
    oooo.write(A,13);
    oooo.close();
    return 0;
}