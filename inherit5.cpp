#include<iostream>
using namespace std;
class a
{
public:
    void display()
    {
        cout<<"Base Class Content"<<endl;
    }
};
class b: public a
{
public:
    void display()
    {
        cout<<"Intermediate Class"<<endl;
    }
};
class c: public b
{

};
int main()
{
    c c;
    c.display();

}
