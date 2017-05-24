// prgem tyo find the lcm of two no.

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int num1,num2,i,hcf,lcm; // three numbers

cout<<endl<<"enter two no.";
cin>>num1>>num2;

//calculate the min of 2 no.
int min=(num1<num2?num1:num2);

// logic for finding the HCF of the Two no.
for(i=min;i>0;i--)
{
if(num1%i==0&&num2%i==0)
{
hcf=i;
break;
}
}

lcm=(num1*num2)/hcf;

cout<<endl<<"The LCM of "<<num1<<" and "<<num2<<"is : "<< lcm;

getch();
}