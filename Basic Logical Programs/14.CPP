// program for finding the odd or even no.

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int number;
cout<<endl<<"Enter any number :";
cin>>number;

// logic for finding even and odd number
if(number%2==0)
cout<<endl<<number<<" is even number";
else
cout<<endl<<number<<" is odd number";

getch();
}