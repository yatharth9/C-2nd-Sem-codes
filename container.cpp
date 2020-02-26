#include<iostream>
using namespace std;
class first
{
public:
    void showf()
    {
        cout<<"Hello from the first class"<<endl;
    }
};
class second
{
    first f;
public:
    second()
    {
        f.showf();
    }
};
int main()
{
    second a;

}
