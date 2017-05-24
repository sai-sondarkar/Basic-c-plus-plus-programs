// prymid 14

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int i,j,a=1,b;
char ch=65,ch1=65;

// logic for the reqyired pyramid
for(i=1;i<=5;i++)
{

ch1=65;

for(j=i;j<=5;j++)
cout<<" ";

for(j=1;j<=i;j++)
cout<<ch1++;

for(j=1,ch=64+(i-1);j<=i-1;j++)
cout<<ch--;
cout<<endl;
}

getch();
}
