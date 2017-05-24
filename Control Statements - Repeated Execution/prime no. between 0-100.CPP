// prgrm for finding prime no. between 0-100;

#include<iostream.h>
#include<conio.h>

void main ()
{
clrscr();

int i,flag,j;

cout<<endl<<"Prime NO. Between 0 to 100 : "<<endl;

for (i=2;i<100;i++)
 {
  flag=1;
  for (j=2; j*j<=i; j++)
   {
     if (i % j == 0)
       {
	flag=0;
	break;
       }
   }
   if(flag)
   cout << i <<" ";
  }

getch();
}
