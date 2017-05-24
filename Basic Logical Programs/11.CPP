// To calculate the compound interest using Compund intrest fromula

#include <iostream.h>
#include<conio.h>
#include<math.h>

void main() // main function
{
clrscr();
float com,pri,rate, a;
int time;
cout<<endl<<"Enter the principal Amount : ";
cin>>pri;
cout<<endl<<"Enter rate % : ";
cin>>rate;
cout<<endl<<"Enter time : ";
cin>>time;

// logic for compound interst
a =pri*pow((1.0+rate/100.0), time);
com = a - pri;

cout<<endl<<"The Compound Interest is: "<<com<<endl;
getch();
}