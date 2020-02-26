#include<iostream>
using namespace std;
class side
{
protected:
    int l;
public:
    void set_value(int x)
    {
        l = x;
    }
};
class square : public side
{
public:
    int sq()
    {
        return(l*l);
    }
};
class cube : public side
{
public:
    int cub()
    {
        return(l*l*l);
    }
};
int main()
{
    square s;
    s.set_value(10);
    cout<<"The Square Value is :"<<s.sq()<<endl;
    cube c;
    c.set_value(20);
    cout<<"The cube value is "<<c.cub()<<endl;
}
