#include<iostream>
using namespace std;
class a
{
public:
    void show()
    {
        cout<<"Base Class "<<endl;
    }
    void display()
    {
        cout<<"Display"<<endl;
    }
};
class b : public a
{
public:
    void show()
    {
        cout<<"Derived Class "<<endl;
    }
};
int main()
{
    a o1;
    b o2;
    o1.show();
    o2.show();
    o1.display();
    o2.display();
}
