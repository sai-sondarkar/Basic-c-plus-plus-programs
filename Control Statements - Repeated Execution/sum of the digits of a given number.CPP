// prgrm for sum of the digits of a given number

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

unsigned long int a,b,c,d=0;

cout<<endl<<"enter a number : ";
cin>>a;

b=a;

//logic for sum of digits of the a number
while(a>0)
{
c=a%10;
d=d+c;
a=a/10;
}
cout<<endl<<"the sum of the digit is "<<b<<" is : "<<d;

getch();
}

