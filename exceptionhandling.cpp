#include<iostream>
using namespace std;
int main()
{
    cout<<"Division of two Numbers"<<endl;
    int a,b,c;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    abc:
    try
    {

        cout<<"Enter the Second Number"<<endl;
        cin>>b;
        if(b == 0)
        {
            cout<<"Exception Occured"<<endl;
            throw b;
        }
    }
    catch (int x ) {
	cout << "Exception Caught \n Zero Cannot be Entered for denominator\n";
	goto abc;
    }
    c = a/b;
    cout<<"The Division of the Numbers is "<<c<<endl;
    cout<<"Execution Complete"<<endl;
}
