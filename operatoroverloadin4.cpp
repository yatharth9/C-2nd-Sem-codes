#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void get()
    {
        cout<<"Enter the Value of the variable"<<endl;
        cin>>a;
    }
  /*void compare(A a2)
    {
        if(a == a2.a)
        {
            cout<<"Equal"<<endl;
        }
        else
            cout<<"Not Equal"<<endl;

    }*/
    void operator ==(A a2)
        {
        if(a == a2.a)
        {
            cout<<"Equal"<<endl;
        }
        else
            cout<<"Not Equal"<<endl;

    }
};
int main()
{
    A a1,a2;
    a1.get();
    a2.get();
    //.compare(a2);
    a1 ==a2;   //a1 is the implicit Object and a2 is the explicit operator
}
