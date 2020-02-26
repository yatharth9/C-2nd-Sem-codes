#include<iostream>
using namespace std;
class stu
{
protected:
    int rno;
public:
    void get()
    {
        cout<<"Enter the Rollno."<<endl;
        cin>>rno;
    }
    void put()
    {
        cout<<"\nRollno: "<<rno<<endl;
    }
};
class test: public stu
{
protected:
    int p1,p2;
public:
    void getm()
    {
        cout<<"Enter the Marks of student in SA1 :"<<endl;
        cin>>p1;
        cout<<"Enter the Marks of student in SA2 :"<<endl;
        cin>>p2;
    }
    void putm()
    {
        cout<<"Marks Obtained: "<<endl;
        cout<<"Part 1: "<<p1<<endl;
        cout<<"Part 2: "<<p2<<endl;
    }
};
int main()
{
    test t1;
    t1.get();
    t1.put();
    t1.getm();
    t1.putm();
}
