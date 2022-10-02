// Create a structure for student details ( Full name, rollno, marks ) and create structure variable & print sample data of student.
#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int roll;
    int mark;
};
int main()
{
    student student1;
    student1.name="krishn kant kumar";
    student1.roll=2100009556;
    student1.mark=100;

    cout<<"name : "<<student1.name<<endl;
    cout<<"roll : "<<student1.roll<<endl;
    cout<<"mark : "<<student1.mark<<endl;
    cout<<sizeof(student1)<<endl;

    return 0;
}