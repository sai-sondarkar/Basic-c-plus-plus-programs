// prgrm to convert decimal no. to a binary no.

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

long unsigned int num,rem,c,multi=1,sum=0,temp;

cout<<endl<<"enter a no. ";
cin>>num;

temp=num;

// logic for converting decimla no. to binary
while(temp>0)
{
rem=temp%2;
c=rem*multi;
sum=sum+c;
multi=multi*10;
temp=temp/2;
}

cout<<endl<<"the binary of the decimal no. : "<<num<<" = "<<sum;

getch();
}
