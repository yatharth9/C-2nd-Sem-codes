#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"Base Default Constructor"<<endl;
    }
    ~a()
    {
        cout<<"Bass Destructor "<<endl;
    }
};
class b : public a
{
    public:
    b()
    {
        cout<<"Derived Default Constructor"<<endl;
    }
    b(int i)
    {
        cout<<"Derived Parametrized Constructor"<<endl;
    }
    ~b()
    {
        cout<<"Derived Destructor "<<endl;
    }
};
int main()
{
    a a;
    b b1;
    b b2(3);
}
