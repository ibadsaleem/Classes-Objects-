#include <iostream>
#include <conio.h>
using namespace std;
class Bank
{
    int Acc=11;
    string name="ibad";
    float balance=0.0;
    int trans=0;
    float interest=0.0;
    
    public:
    void setacc(int n)
    {
        Acc=n;
    }
    void setname(string i)
    {
        name=i;
    }

    void dep(int amt)
    {
        if (amt>0)
        balance=balance+amt;
        else 
        cout<<"wrong amount entered";
        trans=trans+1;
    }
    

 void withd(int amt1)
 {
     if (amt1>balance)
     cout<<"Insufficient amount";
     else 
     {
        balance=balance-amt1;
     }
     trans=trans+1;
}

void inter(int y)
{
    interest=balance*0.12*y;  //12% interest rate
    balance=balance+interest;
}

float getb()
{
    return balance;
}
float getint()
{
    return interest;
}
int gettrans()
{
    return trans;
}
void Menu(string N)
{
    while(1){
    Bank B;
    system("cls");
    cout<<"\t  Welcome "<<N<<" To Standard Chartered Bank\n==========================================\n\n";
    cout<<"1.Display the account balance\n2.Display the number of transactions\n3.Display interest earned for this period\n4.Make a deposit\n5.Make a withdrawal\n6.Add interest for this period\n7.Exit the program\n";
    cout<<"\n\n------Press Your Choice------";
char a=getch();
if (a=='1')
{
    system("cls");
    cout<<"Your Balance Is: $"<<getb();
    cout<<"\nPress any key to continue";
    getch();
}
if (a=='2')
{
    system("cls");
    cout<<"No of Transaction Are: "<<gettrans();
    cout<<"\nPress any key to continue";
    getch();
}
if (a=='3')
{
	
    cout<<"Your Interest Is: $"<<getint();
    cout<<"\nPress any key to continue";
    getch();
}
if (a=='4')
{
	system("cls");
    int i;
    cout<<"Enter Amount to Deposit: $";
    cin>>i;
    dep(i);
}
if (a=='5')
{
	system("cls");
    int j;
    cout<<"Enter Amount To Withdraw: $"<<j;
    withd(j);
}
if (a=='6')
{
    system("cls");
    int y;
    cout<<"Enter Number Of Years: ";
    cin>>y;
    inter(y);
    cout<<"Interest Earned: $"<<getint();
    cout<<"\nPress any key to continue";
    getch();
    system("cls");
}
if (a=='7')
{
	
    exit(1);
}
}
}
};


int main()
{
    int acc;
    string Name;
    Bank B;
    cout<<"Enter Account Number: ";
    cin>>acc;
    B.setacc( acc);
    cout<<"\nEnter Name: ";
    cin>>Name;
    B.setname( Name);
    B.Menu(Name);
}