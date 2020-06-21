#include <iostream>
#include <conio.h>
using namespace std;
class CounterType
{
 int i;
 public:
 void seti(int num)
 {
     if (num>0)
     i=num;
     else 
     i=0;
 }
 void inci()
 {
     i=i+1;
 }
 void deci()
 {
     i=i-1;
 }
 int geti()
 {
     return i;
 }
 void dispi()
 {
     cout<<"\nCurrent Count Value Is: "<<i;
 }

};

int main()
{
    CounterType C;
    C.seti(0);
    while(1)
    {
    
    cout<<"Welcome To Counter\n";
    cout<<"Choose From The Following\n";
    cout<<"1)Increase Counter\n2)Decrease Counter\n3)Display Counter\n4Exit";
    cout<<"\n\nPress Your Choice";
    char a=getch();
    
    if (a=='1')
    {
        cout<<"\nCounter Increased";
        C.inci();
    }
    else if (a=='2')
    {
        cout<<"\nCounter Decreased";
        C.deci();
    }   
    else if(a=='3')
    {

        C.dispi();
    }
    else if (a=='4')
    {
        cout<<"\nEXITED";
        exit(1);
    }
    else {
        cout<<"\n\tWrong Choice Pressed";
    }
getch();
system("cls");
}
}