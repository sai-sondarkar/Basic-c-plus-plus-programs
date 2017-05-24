// program for an armstrog no.

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int a,b,c,d=0;

cout<<endl<<"enter a no. ";
cin>>a;

b=a;

// logic for sepreation of digits of number
while(a>0)
{
c=a%10;
d=d+pow(c,3);
a=a/10;
}

if(b==d)
cout<<endl<<"Number is a amrstrong no. ";
else
cout<<endl<<"Number is not a amrstrong no. ";

getch();
}
