#include<iostream>
#include<string>
using namespace std;
class abc
{   public:
    int rno;
    char name[30];
};
int main()
{
    abc a[5];
    for(int i=0; i<5; i++)
    {
        cout<<"Enter name of Student "<<i+1<<endl;
        gets(a[i].name);
        cout<<"Enter Roll No. of Student "<<i+1<<endl;
        cin>>a[i].rno;
    }
    for(int i=0; i<5; i++ )
    {
        cout<<"Name of Student "<<i+1<<" is : "<<a[i].name<<endl;
        cout<<"Roll no. of Student "<<i+1<<" is : "<<a[i].rno<<endl;
    }
}
