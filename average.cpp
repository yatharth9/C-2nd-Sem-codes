#include<iostream>
using namespace std;
class average
{
    int n, a[20];
public:
    void getdata()
    {
        cout<<"Enter the number of elements "<<endl;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cout<<"A["<<i<<"] :";
            cin>>a[i];
        }
    }
    float avg()
    {
        float sum=0,ans;
        for(int i=0; i<n; i++)
            sum+=a[i];
        ans = sum/n;
        cout<<"Average is: "<<ans;
    }
};
int main()
{
    average a;
    a.getdata();
    a.avg();
    return 0;
}
