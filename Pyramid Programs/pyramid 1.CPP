// pryamid 1

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j;

// logic for the reqyired pyramid
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
cout<<"*";
cout<<endl;
}

getch();
}
