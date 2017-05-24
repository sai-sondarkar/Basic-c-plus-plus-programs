//pgrm for input of three  no. and displaying the sqaur and the cubes

#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{

clrscr();

int a,b,c;

cout<<endl<<"enter three no. :";
cin>>a>>b>>c;

cout<<endl<<"the suquare of the three no. is : "<<pow(a,2)<<" "<<pow(b,2)<<" "<<pow(c,2);
cout<<endl<<"the cubes of the three no. are  : "<<pow(a,3)<<" "<<pow(b,3)<<" "<<pow(c,3);

getch();
}

