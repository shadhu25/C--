/*
    Write a program, on input of grades return remarks

    for 'A' grade -> "Excellent"

    for 'B' grade -> "Good"

    for 'C' grade -> "Passed"

    for 'F' grade -> "Failed"

    default -> "Invalid"
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"please inter your grade :";
    string remark;
    char grade;
    cin>>grade;
    switch (grade)
    {
    case 'A':
        remark="excilent";
        break;
    case 'B':
        remark="good";
        break;
    case 'C':
        remark="passed";
        break;
    case 'F':
        remark="failed";
        break;
    default:
        cout<<"invalid";
        break;
    }
    cout<<remark<<endl;
    return 0;
}