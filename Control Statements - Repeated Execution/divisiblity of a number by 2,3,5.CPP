// pgrm to check the divisiblity of a number by 2,3,5

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int num;

cout<<endl<<"enter a number to check its divisibilty by 2,3,5 : ";
cin>>num;

// logic to test the divisiblity of Numbers by 5,3,2
if(num%2==0)
{
 if(num%3==0)
  {
   if(num%5==0)
     cout<<endl<<" Number is divisible by 2,3,5 ";
   else
     cout<<endl<<" number is not disivible by 2,3,5";
  }
 else
  cout<<endl<<"Number is not divisible by 2,3,5";
}
else
cout<<endl<<"Number is not divisible by 2,3,5";

getch();
}
