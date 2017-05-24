#include<iostream.h>
#include<conio.h>

void main()  // main function
{
clrscr();
int a,b,qut,rem;
cout<<endl<<"Enter 2 numbers : "<<endl;
cin>>a>>b;

// logic for Quotient and Reminder
rem=a%b;
qut=a/b;
cout<<endl<<"Quotient :"<<qut;
cout<<endl<<"Reminder :"<<rem;
getch();
} 