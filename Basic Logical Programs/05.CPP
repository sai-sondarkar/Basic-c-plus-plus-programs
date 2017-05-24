// program to show the working of the decrement operator
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=93,b;

// Value of a will not be decreased before assignment.
b = a--;
cout << "Line 1 - Value of a-- is :" << b << endl ;

// After expression value of a is decreased
cout << "Line 2 - Value of a is :" << b << endl ;

// Value of a will be decreased before assignment.
b = --a;
cout << "Line 3 - Value of --a is  :" << b << endl ;
getch();
}