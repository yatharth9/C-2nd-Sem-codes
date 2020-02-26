#include<iostream>
#include<string.h>
#include<stdio.h>
#define pi 3.14
using namespace std;
class object
{
    public:
    void area(int a, int b) //For the area of Rectangle
    {
        int x = a*b;
        cout<<"The Area of the Rectangle is "<<x<<" units"<<endl;
    }
    void area(int c)
    {
        int flag;
        cout<<"You have Entered One Property of your Object. \n There are 2 Objects for that Square and Circle. \n Select 1 for Square. \n Select 2 for circle"<<endl;
        cin>>flag;
        abc:
        switch(flag)
        {
            case 1: //int x = c*c;
                    cout<<"The Area of the Square is "<<c*c<<" Units"<<endl;
                break;
            case 2:  //int y = pi*c*c;
                    cout<<"The Area of the Circle is "<<pi*c*c<<" Units"<<endl;
                break;
            default: cout<<"Invalid Choice \n Choose a correct Option";
                      goto abc;
        }
    }
};
int main()
{
    object ob1;
    ob1.area(3,5);
}
