#include<iostream>
using namespace std;
class student
{
    int age;
    char name[30];
public:
    void getdata()
    {
        cin>>age>>name;
    }
    void display()
    {
        cout<<age<<" "<<name;
    }
};
int main()
{
    student a;
    a.getdata();
    a.display();
    return 0;
}
