// pgrm for checking weather a no. given is prime or not

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int a,flag=0,i,n;

cout<<endl<<"Enter the any number to be checked : ";
cin>>n;

for(i=1;i<=n;i++)
{
a=n%i;

if(a==0)
flag=flag+1;

}

if (flag==2)
cout<<endl<<"The given number is prime";
else
cout<<endl<<"The given number is not prime";

getch();
}