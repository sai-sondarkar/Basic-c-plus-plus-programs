// prymid 13

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int i,j,a,b,n;

cout<<endl<<"Enter the no of the elements ";
cin>>n;


// logic for the reqyired pyramid
for(i=1;i<=n;i++)
{
 a=1;
 for(j=i;j<=n;j++)
  cout<<" ";
 for(j=1;j<=i;j++)
  if(a>9)
  {
   a=0;
   cout<<a++;
  }
  else
    cout<<a++;
 for(j=1,b=i-1;j<=i-1;j++)
  cout<<b--;
 cout<<endl;
}

getch();
}
