// prgm pryamid 6

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
  cout<<" ";
 for(j=(i*2)-1;j<=7;j++)
  cout<<"*";
 cout<<endl;
}

getch();
}
