//pgrm to swap the value of the varilabe without using temp;

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int a,b;

cout<<endl<<"enetr the value of A :";
cin>>a;
cout<<endl<<"enter the valve of B :";
cin>>b;

// lgic for swaping the values of the variables
a=a+b;
b=a-b;
a=a-b;

cout<<endl<<"changed value of A:"<<a;
cout<<endl<<"changed value of B:"<<b;

getch();
}
