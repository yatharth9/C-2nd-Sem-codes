#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class bank
{
    int acno;
    char nm[100],acctype[100];
    float bal;
public:
    bank(int acc_no, char *name, char *acc_type, float balance)
    {
        acno = acc_no;
        strcpy(nm,name);
        strcpy(acctype,acc_type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank :: deposit()
{
    int a;
    system("cls");
    cout<<"Enter the Amount you want to deposit "<<endl;
    cin>>a;
    bal += a;
    cout<<endl<<"Amount Deposited.\n Balance after deposit is  "<<bal;
    cout<<endl;
    system("pause");
}
void bank :: withdraw()
{
    int a;
    system("cls");
    cout<<"Enter the Amount you want to withdraw "<<endl;
    cin>>a;
    if(a > bal)
    {
        cout<<"ERROR: Amount to be withdrawn is more than the current balance.\n "<<endl;
        system("pause");
        return;
    }
    else
        bal-=a;
        cout<<endl<<"Amount Withdrawn.\n Balance after Withdrawal is  "<<bal<<endl;
        system("pause");
}
void bank :: display()
{   system("cls");
    cout<<"Displaying the Current Balance: \t"<<bal<<" rupees in "<<acctype<<" account"<<endl;
    system("pause");
}
int main()
{
    int acc_no;
    char name[100],acc_type[100];
    float balance;
    cout<<"\t\t Enter the Details:- \n\n"<<endl;
    cout<<"Enter the Account Number  "<<endl;
    cin>>acc_no;
    cout<<"Enter the Account Name \n";
    cin>>name;
    cout<<"Enter the Account Type \n ";
    cin>>acc_type;
    cout<<"Enter the Account Balance \n ";
    cin>>balance;
    bank b1(acc_no ,name , acc_type, balance);
    b1.display();
    b1.deposit();
    b1.withdraw();
    b1.display();
    //system("pause");
    return 0;
}
