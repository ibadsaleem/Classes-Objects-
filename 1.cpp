#include <iostream>
#include <conio.h>
using namespace std;
class BankAccount{
    string dname;
    int AN;
    float Balance;

    public:
    void setbal(string name,int n)
    {
        AN=n;
        dname=name;
        Balance=0;
    }
    void deposit(float amt)
    {
           Balance=Balance+amt; 
    }
    void withdraw(float amt)
    {
        if (amt>Balance)
        {
            cout<<"Insufficient Amount";
        }
        else
        {
            Balance=Balance-amt;
        }
    }
    void display()
    {
        cout<<"Name: "<<dname<<endl;
        cout<<"Balance: "<<Balance<<endl;
    }
    float getamt()
    {
        return Balance;
    }
};
int main()
{
    BankAccount B;
    string name;
    char a;
    int Acc;
	float WA,DA;
    float Amount;
    cout<<"Enter Your Name: ";
    getline(cin,name);
    cout<<"\nEnter Account Number: ";
    cin>>Acc;
     B.setbal( name,Acc);

    cout<<endl;
    cout<<endl;
    while(1){
    cout<<"\n\nChoose The Option\n1)Withdraw\n2)Deposit)";
     a=getch();

    if (a=='1')
    {
        cout<<"Enter Amount to Withdraw: ";
        cin>>WA;
        B.withdraw(WA);
        B.display();
        getch();
        system("cls");
    }
    else if (a=='2')
    {
        cout<<"Enter Amount to Deposit: ";
        cin>>DA;
         B.deposit(DA);
        system("cls");
         B.display();
        getch();
        system("cls");
    }
     if (toupper(a)=='E')
     {
         exit(1);
     }
    }
}