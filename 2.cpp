#include <iostream>
using namespace std;
class Employee{
    string Fname;
    string Lname;
    int monslary;
    int ysalary;
    public:
    void setemp(string F,string L,int sal)
    {
        Fname=F;
        Lname=L;
        monslary=sal;
    
   if (monslary<0.0)
   {
       monslary=0.0;
   } 
    }
    string getFname()
    {
        return Fname;
    }
    string getLname()
    {
        return Lname;
    }
    int getsalary()
    {
        return monslary;
    }
    int getysalary()
    {
        return ysalary;
    }
    void yearlys()
    {
        ysalary=monslary*12;
    }
    void raisedsal()
    {
        ysalary=ysalary*1.1;
    }
};



int main()
{
    int monthsalary;
    Employee E1,E2;
    string firstname,firstname1;
    string lastname,lastname1;
    int ms,ms1;
    cout<<"Enter Employee 1 First Name: ";
    getline(cin,firstname);
    cout<<endl;
    cout<<"Enter Employee 1 Last Name: ";
    getline(cin,lastname);
    cout<<endl;
    cout<<"Enter Monthly Salary of Employee 1: ";
    cin>>ms;
    E1.setemp(firstname,lastname,ms);
    cout<<"Enter Employee 2 First Name: ";
    cin>>firstname1;
    cout<<endl;
    cout<<"Enter Employee 2 Last Name: ";
    cin>>(lastname1);
    cout<<"Enter Employee 2 Monthly Salary: ";
    cin>>ms1;
    E2.setemp(firstname1,lastname1,ms1);
    cout<<endl;
    E1.yearlys();
    cout<<"\nYearly Salary: $"<<E1.getysalary();
    E2.yearlys();
    cout<<"\nYearly Salary: $"<<E2.getysalary();
    E1.raisedsal();
    cout<<"\nIncreased Yearly Salary: "<<E1.getysalary()<<endl;
    E2.raisedsal();
    cout<<"\nIncreased Yearly Salary Emp 2: "<<E2.getysalary()<<endl;

}

    
