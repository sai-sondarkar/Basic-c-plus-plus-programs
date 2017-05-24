// pryamid 8;

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
for(i=1;i<=4;i++)
{
 for(j=i;j<=4;j++)
  cout<<"*";
 cout<<endl;
}

getch();
}
