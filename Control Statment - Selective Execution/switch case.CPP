// prgm to for simple example of switch case

#include <iostream.h>
#include<conio.h>

void main ()
{
   clrscr();
   char grade = 'A';

  // switch case
   switch(grade)
   {
   case 'A':
   cout<<endl<<"Excellent";
   break;
   case 'B':
   cout<<endl<<"Very Good";
   break;
   case 'C':
   cout<<endl<<"Well Done";
   break;
   case 'D':
   cout<<endl<< "Just passed";
   break;
   case 'F':
   cout<<endl<<"Fail"<< endl;
   break;
   default :
   cout<<endl<<"Invalid grade"<<endl;
   }
   cout<<endl<<"Your grade is "<<grade;
   getch();
}