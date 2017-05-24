//pgrm for calculating the salary

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int slry,days,i,perday;

cout<<endl<<"Enter the average salary of the person perday : ";
cin>>perday;
cout<<endl<<"Enter the number of days he worked            : ";
cin>>days;

slry=days*perday;

cout<<endl<<"The total salary earned is                    : "<<slry;

getch();
}

