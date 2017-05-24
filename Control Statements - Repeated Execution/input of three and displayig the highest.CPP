//pgrm for input of three and displayig the highest

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int a,b,c;
cout<<endl<<" enter three no. ";
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<endl<<" the largest no. is "<<a;
else 
if(b>a&&b>c)
cout<<endl<<" the largest no. is "<<b;
else
if(c>a&&c>b)
cout<<endl<<" the largest no. is "<<c;

getch();
}


