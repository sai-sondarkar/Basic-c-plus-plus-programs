// prymid 12

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j,a=1;

// logic for the reqyired pyramid
for(i=1;i<=4;i++)
{
 for(j=1;j<=i;j++)
  if(a>9)
   {
    a=0;
    cout<<a++;
   }
else
 cout<<a++;
 cout<<endl;
}
getch();
}
