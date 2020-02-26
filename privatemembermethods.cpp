#include<iostream>
#include<string>
using namespace std;
class value
{
private:
    int a,b;
    string abc;
    void getdata();
public:
    void show();
};
void value::getdata()
{
    cout<<"Enter the First Number"<<endl;
    cin>>a;
    cout<<"Enter the Second Number"<<endl;
    cin>>b;
}
void value::show()
{
    getdata();
    cout<<"The Two Numbers are "<<a<<" and "<<b<<endl;
}
int main()
{
    value s1;
    s1.show();
    return 0;
}
