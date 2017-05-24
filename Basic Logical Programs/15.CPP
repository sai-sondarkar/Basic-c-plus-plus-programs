// the program to divide two no. without the use of '/' operator

#include <iostream.h>
#include<conio.h>

void main ()
{
clrscr();
int a,b,k=0;

cout<<endl<<"Enter the value to divide :";
cin>>a;
cout<<endl<<"Enter the value to divide by :";
cin>>b;

// logic for the divide
while(a>=b)
{
cout<<a<<endl;
a=a-b;
k++;
}
cout<<endl<<"The Quotient "<<k;
cout<<endl<<"The Reminder "<<a;
getch();
}