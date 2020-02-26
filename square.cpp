#include<iostream>
using namespace std;
class square
{
    int x;
public:
    void getdata(int m)
    {
        x = m;
    }
    void answer(square s)
    {
        x = s.x*s.x;
    }
    void show()
    {
        cout<<"Answer is: "<<x;
    }
};
int main()
{
    square s1,s2;
    s1.getdata(6);
    s2.answer(s1);
    s2.show();
    return 0;
}
