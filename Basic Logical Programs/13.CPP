// prgrm for finding the averge of  5 no.

#include<iostream.h>
#include<conio.h>

void main ()
{
clrscr();
int sum=0,average=0,k,a[10];
cout<<"Enter no :"<<endl;
for(k=0;k<5;k++)
{
cin>>a[k];
sum=sum+a[k];     // sum of numbers enterd
}

average=sum/5;   // average of the numbers
cout<<endl<<"The average of the Numbers is "<<average;
getch();
}
