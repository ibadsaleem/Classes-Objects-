#include <iostream>
#include <conio.h>
using namespace std;
class Student{
    string sname;
    int rollno;
    float Marks[4];
    float percent;
    float Sum=0.0;
    public:
    void setstd(string stdn,int rn,float M[])
    {
        sname=stdn;
        rollno=rn;
        for (int i=0;i<4;i++)
        {
            Marks[i]=M[i];
        }
    }
    void percentage()
    {
        
        for (int i=0;i<4;i++)
        {
            Sum=Marks[i]+Sum;
        }
        percent=Sum/4;
    }
    void display()
    {
    	system("cls");
        cout<<"Name: "<<sname<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        for (int i=0;i<4;i++)
        {
            cout<<"Marks Subject "<<i+1<<": "<<Marks[i]<<"\n";
        }
        cout<<"Percentage: "<<percent;
    }
};

int main()
{
    Student S;
    string name;
    int RN;
    float M[4];
    cout <<"Enter Your Name: ";
    cin>>name;
    cout<<endl;
    cout<<"Enter Your Roll No: ";;
    cin>>RN;
    cout<<endl;
    cout<<"Enter Your Marks For Four Subjects\n\n";
    for (int i=0;i<4;i++)
    {
        cout<<"Subject "<<i+1<<" Marks: ";
        cin>>M[i];
    }
    S.setstd(name,RN,M);
    S.percentage();
    system("cls");
    S.display();
}