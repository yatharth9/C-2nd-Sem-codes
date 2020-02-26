#include<iostream>
using namespace std;
class a
{
public:
    void sum(int a,int b)
    {
        cout<<"A + B: "<<a+b<<endl;
    }
    void sum(int a,int b, int c)
    {
        cout<<"A + B + C: "<<a+b+c<<endl;
    }
};
int main()
{
    a o1;
    o1.sum(10,20);
    o1.sum(10,20,30);
}
