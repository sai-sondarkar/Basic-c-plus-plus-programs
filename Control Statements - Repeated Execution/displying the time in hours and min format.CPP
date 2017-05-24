// pgrm for input of time in min and displying the time in hours and min format;

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int a,b,c;

cout<<endl<<"enter the time in min ";
cin>>a;

// logic for converting time in min to hours and min
b=a/60.0;
c=a%60;

cout<<endl<<"the time in hours nd minitues is : "<<b<<"Hrs: "<<c<<"Min";

getch();
}

