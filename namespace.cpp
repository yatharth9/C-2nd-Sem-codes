#include<iostream>
using namespace std;
namespace abc
{
    void xyz()
    {
        cout<<"Inside abc::xyz()"<<endl;
    }
}
int main()
{
    abc::xyz();
    return 0;
}
