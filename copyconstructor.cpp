#include<iostream>
using namespace std;
class abc
{
    int a;
    int b;
public:
    abc(int i, int j)
    {
        a = i;
        b = j;
    }
    abc( abc &other)
    {
        a = other.a;
        b = other.b;
    }
    void get()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    abc a(10,20);
    abc b(a);
    b.get();
    a.get();
}
