// find the sum of the series 1^3+2^3+3^3+...N^3

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int i,sum=0,lmt;

cout<<endl<<"enter the last number of the series ";
cin>>lmt;

// logic for sum of the series
for(i=1;i<=lmt;i++)
sum=sum+pow(i,3);

cout<<endl<<"the sum of the series is :"<<sum;

getch();
}

