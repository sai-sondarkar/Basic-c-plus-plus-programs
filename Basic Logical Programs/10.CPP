//wap for input in f° and print in c°

#include <iostream.h>
#include<conio.h>

void main()
{
clrscr();
float f,c;

cout<<endl<<"Enter the temperture in fahrenheit :";
cin>>f;

// logic for finding value of C
c=(f-32)*(5.0/9.0);

cout<<endl<<"The tempeture in centigrade :"<<c;

getch();
}
