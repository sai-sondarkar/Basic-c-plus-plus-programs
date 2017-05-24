//pgrms to print even no. between 0-100;

#include<iostream.h>
#include<conio.h>

void main()
{

clrscr();

int i;

cout<<endl<<"even no. between 0 to 100 : "<<endl;

for(i=1;i<=100;i++)
if(i%2==0)
cout<<i<<" ";

getch();
}

