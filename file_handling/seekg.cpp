#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char A[20]={0};
    ifstream oooo;
    oooo.open("krishn.txt");
    oooo.seekg(-4,ios_base::end);
    oooo.read(A,6);
    for(int i=0;A[i]!=0;i++)
    {
        cout<<A[i]<<endl;
    }
    oooo.close();
    return 0;
}