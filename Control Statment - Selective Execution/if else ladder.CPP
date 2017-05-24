// the program for the example of the if-else ladder

#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr();
int number=23;

// check the condition
if(number<10)
  {
  // if condition is true then print the following
  cout<<endl<< "Value of number is less than 10";
  }
else
if(number<20)
 {
// if else if condition is satisfied
 cout<<endl<<"Value of number is less than 20";
 }
else
if(number<30)
  {
  // if else if condition is satisfied
  cout<<endl<<"Value of number is less than 30";
  }
else
  {
  // if none of the conditions is satisfied
  cout<<endl<<"Value of number is not matching";
  }


cout<<endl<<"\nExact value of a is : "<<number;
getch();
}