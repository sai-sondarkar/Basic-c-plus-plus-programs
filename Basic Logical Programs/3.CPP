// program for using the setw() manipulator

#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
clrscr();
int aaaa=12345,bbb=234,c=10,dd=13567;
cout<<setw(10)<<"aaaa="<<setw(8)<<aaaa<<endl;    //working of setw
cout<<setw(10)<<"bbb="<<setw(8)<<bbb<<endl;
cout<<setw(10)<<"c="<<setw(8)<<c<<endl;
cout<<setw(10)<<"dd="<<setw(8)<<dd<<endl;
getch();
}
