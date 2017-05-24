// prymid 15

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j,a=1,b,c;

// logic for the reqyired pyramid
for(i=1,c=0;i<=5;i++,c++)
{
a=i;

for(j=i;j<=5;j++)
cout<<" ";

for(j=1;j<=i;j++)
 { if(a>9)
     {
       a=0;
       cout<<a++;
     }
  else
      cout<<a++;
 }
 b=c*2;
 for(j=0;j<=i-2;j++)
  {
   cout<<b--;
  }
 cout<<endl;
}

getch();
}
