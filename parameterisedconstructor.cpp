#include<iostream>
using namespace std;
class a
{
    int x,y;
public:
    a(int i, int j)
    {
        x = i;
        y = j;
    }
    void get()
    {
        cout<<x<<" "<<  y;
    }
};
int main()
{
    a a1(5,10);
    a1.get();
    cout<<endl;
    a b1(10,20);
    b1.get();
}
