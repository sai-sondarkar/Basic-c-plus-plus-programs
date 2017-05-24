// prgm for pryamid 10;

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j,a=1;

// logic for the required pyramid
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
  cout<<a;
 cout<<endl;
 a++;
}

getch();
}
