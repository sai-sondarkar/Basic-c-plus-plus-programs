//program to calculate the simple intrest

#include<iostream.h>
#include<conio.h>

void main() //  main function
{
clrscr();
int pri,rate,time,a;
cout<<"Enter Principle Amount: ";
cin>>pri;
cout<<"Enter Rate % : ";
cin>>rate;
cout<<"Enter Time : ";
cin>>time;

// logic for simple intrest

a=(pri*rate*time)/100;
cout<<"Simple interest is : "<<a;
getch();
}

