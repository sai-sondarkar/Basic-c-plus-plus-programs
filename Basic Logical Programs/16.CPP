//C++ Program to find the area of any triangle using Heron's Formula

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
float X,Y,Z;
float s,area;
cout<<endl<<"Enter size of each sides of triangle"<<endl;
cout<<endl<<"First Side  : ";
cin>>X;
cout<<endl<<"Second Side : ";
cin>>Y;
cout<<endl<<"Third Side  : ";
cin>>Z;

// logic for finding the area of the taiangle
s = (X+Y+Z)/2;
area = sqrt(s*(s-X)*(s-Y)*(s-Z));

cout<<"Area of The Triangle= "<<area<<endl;
getch();
}