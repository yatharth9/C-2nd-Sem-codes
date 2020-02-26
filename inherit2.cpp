#include<iostream>
using namespace std;
class staff
{
private:
    char name[50];
    int code;
public:
    void g();
    void d();
};
class t: public staff
{
private:
    int speed;
public:
    void g();
    void d();
};
void staff::g()
{
    cout<<"Name";
    gets(name);
    cout<<"Code";
    cin>>code;
}
void staff::d()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Code "<<code<<endl;
}
void t::g()
{
    cout<<"Speed";
    cin>>speed;
}
void t::d()
{
    cout<<"Speed"<<speed;
}
int main()
{
    t t1;
    cout<<"Enter Data";
    t1.staff::g();
    t1.g();
    t1.staff::d();
    t1.d();
}
