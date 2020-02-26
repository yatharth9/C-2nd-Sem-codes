#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
};
class student : public person
{
public:
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
class s2 : public person
{
public:
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
int main()
{
    student s;
    s.name = "abc";
    s.age = 17;
    s.show();
    s2 stu;
    stu.s2::show();
    return 0;
}
