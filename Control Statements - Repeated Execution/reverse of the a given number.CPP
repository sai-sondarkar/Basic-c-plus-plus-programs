// prgrm for making the reverse of the a given number

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

unsigned long int a,b,c,d=0;

cout<<endl<<"enter a number :";
cin>>a;

b=a;

// logic for reverse of a number
while(a>0)
{
 c=a%10;
 d=(d*10)+c;
 a=a/10;
}

cout<<endl<<"the reverse of the no. "<<b<<" is : "<<d;

getch();
}

