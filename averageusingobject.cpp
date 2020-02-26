#include<iostream>
using namespace std;
class student
{
    int oops_marks;
    int python_marks;
public:
    void getdata()
    {   int x,y;
        cout<<"Enter The Marks in OOPs and Python"<<endl;
        cin>>x>>y;
        oops_marks = x;
        python_marks = y;
    }
    student add(student s)
    {
        oops_marks += s.oops_marks;
        python_marks += s.python_marks;
    }
    void pythonaverage(student s)
    {
        float python_avg = python_marks / 5;
        cout<<"The Average marks In Python are  : "<<python_avg<<endl;
    }
    void oopsaverage(student s)
    {
        float oops_avg = oops_marks / 5;
        cout<<"The Average marks in OOPS are : "<<oops_avg<<endl;
    }
};
int main()
{
    student s[5];
    for(int i=0; i<5; i++)
    {
        s[i].getdata();
    }
    for(int i=0; i<4; i++)
    {
        s[i+1].add(s[i]);
    }
    s[4].oopsaverage(s[4]);
    s[4].pythonaverage(s[4]);
}
