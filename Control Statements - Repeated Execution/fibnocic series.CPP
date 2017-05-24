// the program for fibnocic series

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

long int a=1,b=1,c,i=1,n;

cout<<endl<<"Enter the range ";
cin>>n;
cout<<endl<<"The fibnnoic serice is = 0 1 1 ";

// logic for fibnnoic series
while(i<=n-3)
{
c=a+b;
a=b;
b=c;
cout<<c<<" ";
i++;
}

getch();
}