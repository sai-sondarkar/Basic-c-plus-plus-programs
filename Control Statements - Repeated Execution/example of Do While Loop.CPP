// prgm for example of Do While Loop


#include<iostream.h>
#include<conio.h>

void main ()
{
clrscr();
int i=1;

cout<<endl<<" odd number from 1 to 50 : "<<endl;

// do loop
do
{
cout<<" "<<i;
i+=2;
}while(i<=50);

getch();
}