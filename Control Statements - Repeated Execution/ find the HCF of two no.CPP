// prgm for the c++ to find the HCF of two no.

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int num1,num2,i,hcf,min; // three numbers

cout<<endl<<"Enter two no. : ";
cin>>num1>>num2;

//calculate the min of 2 no.
min=(num1<num2?num1:num2);

for(i=min;i>0;i--)
{
  if(num1%i==0&&num2%i==0)
   {
    hcf=i;
    break;
   }
}

cout<<endl<<"The HCF of "<<num1<<" and "<<num2<<"is :"<< hcf;

getch();
}