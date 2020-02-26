#include<iostream>
using namespace std;
class test
{
private:
    int count;
public:
    test()
    {
        count = 0;
    }
    void operator ++()
    {
        count++;
    }
    void operator --()
    {
        count--;
    }
    void display()
    {
        cout<<"Count: "<<count<<endl;
    }
};
int main()
{
    test t;
    ++t;
    t.display();
    --t;
    t.display();
}
