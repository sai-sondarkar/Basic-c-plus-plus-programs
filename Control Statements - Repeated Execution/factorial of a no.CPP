//prgrm for factorial of a no.


#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int num,fact=1;

cout<<"Enter the number: ";
cin>>num;

for(int i=1;i<=num;i++)
fact=fact*i;

cout<<endl<<"The factorial of the given number is: "<<fact;

getch();
}