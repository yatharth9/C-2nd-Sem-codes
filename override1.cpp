#include<stdlib.h>
#include<iostream>
using namespace std;
class base
{
public:
    virtual void display() = 0;
    /*{
        cout<<"Base Class "<<endl;
    }
    */
};
class derived : public base
{
public:
    void display()
    {
        cout<<"Derived Class "<<endl;
    }
};
int main()
{
    //base b1;
    base *p;
    //p->display();
    //b1.display();
    //system("pause");
    system("cls");
    derived d1;
    p = &d1;
    p->display();
    // d1.display();
}
