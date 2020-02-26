#include<iostream>
using namespace std;
class a
{
public:
    string name;
};
class b
{
public :
    int marks;
};
class c: public b, public a
{
public:
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
    }
};
int main()
{
    c c;
    c.name = "abc";
    c.marks = 90;
    c.show();
}
