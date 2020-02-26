#include<iostream>
using namespace std;
class example
{
    int data[5];
public:
    void input()
    {
        int i;
        cout<<"Enter 5 Integers "<<endl;
        for(i = 0; i<5; i++)
            cin>>data[i];
    }
    int &operator[](int i)
    {
        return data[i];
    }
};
int main()
{
    int i,sum = 0;
    example a;
    a.input();
    cout<<"Calculating Sum by overloading [] operator "<<endl;
    for(i=0; i<5; i++)

        sum+=a[i];
    cout<<"Sum = "<<sum;
}
