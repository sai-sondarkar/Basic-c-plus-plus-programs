// the program to show an example of the nested if else

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int number=90;

if(number>=0)
{
//if the condition is satisfied

  if(number>50)
   //if the condition is satisfied
   cout<<endl<<"The number is greater than 50";
  else
    if(number<50)
      //if the condition is satisfied
      cout<<endl<<"The number is less than 50";
  else
    if(number==50)
      //if the condition is satisfied
      cout<<endl<<"The number is eqal to 50";
  }
else
 {
  //if the condition is not satisfied
  cout<<endl<<"the number is less than 0";
 }

cout<<endl<<"\nthe value of the number is "<<number;
getch();
}