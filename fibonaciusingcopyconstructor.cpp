#include<iostream>
#include<stdlib.h>
using namespace std;
class fib
{
    int a,b,x,n;    //a and b are the starting values. X is the value till the user wants displayed and n is the value of the current iteration.
public:
    fib()   //
    {
        cout<<"Enter the Number of time you want to print the series"<<endl;
        cin>>x;
        cout<<endl;
        n = 1;
        a = 1;
        b = 1;
    }
    /*void init(int l,int j = 1, int k = 1)    //J and k are the Values where the User might want to start from
    {
        x = l;
        n = 1;
    }   */
    fib( fib &o1)
    {
        if( n > x)
        {
            cout<<"Displayed all the Numbers "<<endl;
            system("pause");
            exit(0);
        }
        else{
        a = o1.a ;
        b = o1.b;
        a += b;
        b += a;
        n++;
        cout<<a<<" "<<b;
        fib(o1);
        }
    }
  /*  int return_n()
    {
        return n;
    }
    int return_x()
    {
        return x;
    }
    */
};
int main()
{
    fib o1;
    //o1.init();
    //while(o1.return_n() >= o1.return_x())
    //{
        fib o2(o1);
       // o1 =  &o2;
    }

//}//
