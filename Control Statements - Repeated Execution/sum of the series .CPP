// find the sum of the series x^3/36 + x^5/56 + x^7/76 +...+x^11/116

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();

int i,sum=0,x,a=36;

cout<<endl<<"enter the value of x: ";
cin>>x;

// logic for the sum of the series
for(i=3;i<=11;i+=2,a+=20)
sum=sum+(pow(x,i)/a);

cout<<endl<<"the sum of the series is :"<<sum;
getch();
}

