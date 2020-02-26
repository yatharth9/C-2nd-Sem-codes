#include<iostream>
using namespace std;
class example
{
    int a,b;
public:
    void input()
    {
        cout<<"Enter A and B "<<endl;
        cin>>a>>b;
    }
    void operator -()
    {
        a = -a;
        b = -b;
    }
    void display()
    {
        cout<<"A : "<<a<<"\nB : "<<b<<endl;
    }
};
int main()
{
    example e;
    e.input();
    cout<<"Before Unloading the Unary Minus Operator"<<endl;
    e.display();
    -e;
    cout<<"After adding the Unary Minus Operator"<<endl;
    e.display();
}
