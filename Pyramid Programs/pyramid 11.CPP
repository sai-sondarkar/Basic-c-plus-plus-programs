// pyramid 11

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j,a;

// logic for the reqyired pyramid
for(i=1;i<=5;i++)
{
 a=1;
 for(j=1;j<=i;j++)
  cout<<a++;
 cout<<endl;
}
getch();
}
