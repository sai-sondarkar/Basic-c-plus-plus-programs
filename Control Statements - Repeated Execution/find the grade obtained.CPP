//pgrm to enter the marks of 5 sub and find the grade obtained;

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int cls,sub[5],i,temp=0,avg;
char name[20];


cout<<endl<<"Enter Name ";
cin>>name;
cout<<endl<<"Enter Class ";
cin>>cls;

cout<<endl<<"Enter Marks Obtaind in 5 subjects ";
for(i=0;i<5;i++)
cin>>sub[i];

// logic for finding the average of 5 numbers
for(i=0;i<5;i++)
temp=temp+sub[i];

avg=temp/5;

clrscr();
cout<<endl<<"Name           : "<<name;
cout<<endl<<"Class          : "<<cls;
cout<<endl<<"% obtained     : "<<avg<<"%";
cout<<endl<<"Grade obtained : ";


// logic for finding the grade
if(avg>=80)
cout<<"A";
else
if(avg<80&&avg>=60)
cout<<"B";
else
if(avg<60&&avg>=40)
cout<<"C";
else
cout<<"fail";

getch();
}

