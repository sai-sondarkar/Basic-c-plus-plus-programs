// program for an armstrog no. b/w 1-1000

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int a,b,c,d,i;

cout<<endl<<"The armstrong Number between 0 to 1000 are :";

for(i=1;i<=1000;i++)
{
 b=a=i;
 d=0;
  while(a>0)
   {
     c=a%10;
     d=d+pow(c,3);
     a=a/10;
    }
if(b==d)
 cout<<" "<<b;
}

getch();
}
