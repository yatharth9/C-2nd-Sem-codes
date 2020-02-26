#include<iostream>
using namespace std;
class sum
{
    int x;
public:
    void getdata(int m)
    {
        x = m;
    }
    sum SUM(sum s)
    {
        sum temp;
        temp.x = x+ s.x;
        return (temp);
    }
    void show()
    {
        cout<<"Answer is : "<<x;
    }
};
int main()
{
    sum s1,s2,s3;
    s1.getdata(4);
    s2.getdata(10);
    s3 = s1.SUM(s2);
    s3.show();
    return 0;
}
