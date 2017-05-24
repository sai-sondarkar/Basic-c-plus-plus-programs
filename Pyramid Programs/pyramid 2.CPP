// pryamid 2

#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();

int i,j;

// logic for the reqyired pyramid
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
  cout<<" ";
 for(j=i;j<=5;j++)
  cout<<"*";
 cout<<endl;
}

getch();
}