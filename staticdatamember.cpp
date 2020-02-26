#include<iostream>
using namespace std;
class ai
{
    int rno;
    char name[20];
    static char course[20];
public:
    void getdata()
    {
        cout<<"Enter the Roll Number of the Student "<<endl;
        cin>>rno;
        cout<<"Enter the name of the student "<<endl;
        gets(name);
    }
    void putdata()
    {
        cout<<"The Roll no of the Student is "<<rno<<endl;
        cout<<"The Name of the Student is "<<name<<endl;
        cout<<"The Course of the Student is "<<course<<endl;
    }
};
char ai::course[20] = "Ai";
class cse
{
    int rno;
    char name[20];
    static char course[20];
public:
    void getdata()
    {
        cout<<"Enter the Roll Number of the Student "<<endl;
        cin>>rno;
        cout<<"Enter the name of the student "<<endl;
        gets(name);
    }
    void putdata()
    {
        cout<<"The Roll no of the Student is "<<rno<<endl;
        cout<<"The Name of the Student is "<<name<<endl;
        cout<<"The Course of the Student is "<<course<<endl;
    }
};
char cse::course[20] = "CSE";
class cyber
{
    int rno;
    char name[20];
    static char course[20];
public:
    void getdata()
    {
        cout<<"Enter the Roll Number of the Student "<<endl;
        cin>>rno;
        cout<<"Enter the name of the student "<<endl;
        gets(name);
    }
    void putdata()
    {
        cout<<"The Roll no of the Student is "<<rno<<endl;
        cout<<"The Name of the Student is "<<name<<endl;
        cout<<"The Course of the Student is "<<course<<endl;
    }
};
char cyber::course[20] = "Cyber";
int main()
{
    cyber c1[3];
    for(int i=0; i<3; i++)
    {
        c1[i].getdata();
        c1[i].putdata();
    }
}



























/*int main()
{
    int i;
    int b;
    b = ++i;
    cout<<b;
}
*/
