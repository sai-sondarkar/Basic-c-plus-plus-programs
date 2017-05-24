// program to show the working of the increment operator

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a = 26,b;

// Value of a will not be increased before assignment.
b = a++;
cout << "Line 1 - Value of a++ is :" << b << endl ;

// After expression value of a is increased
cout << "Line 2 - Value of a is :" << b << endl ;

// Value of a will be increased before assignment.
b = ++a;
cout << "Line 3 - Value of ++a is  :" << b << endl ;
getch();
}