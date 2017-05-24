#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<iomanip.h>
#include<math.h>
#include<graphics.h>

class emp
 {
  int eno,age,dojd,dojm,dojy;
  char city[20],post[10],name[20],grade[3],fname[20],doj[10];
  float basic,hr,da,perpay,hra,conv,ot,perfbas;
  long int total;
 public:

    void empread()
    {
      cout<<endl<<"enter name              :";
      cin>>name;
      cout<<endl<<"enter the emp no.       :";
      cin>>eno;
      cout<<endl<<"enter the designation   :";
      cin>>post;
      cout<<endl<<"enter fathers name      :";
      cin>>fname;
      cout<<endl<<"enter  grade            :";
      cin>>grade;
      cout<<endl<<"enter the city          :";
      cin>>city;
      cout<<endl<<"enter age               :";
      cin>>age;
      cout<<endl<<"enter the date of join (dd/mm/yyyy) :"<<endl;
      cin>>dojd>>dojm>>dojy;
      clrscr();
      cout<<endl<<"     PAYEMENT STRUCTURE   "<<endl;
      cout<<endl<<" basic pay                :";
      cin>>basic;
      cout<<endl<<" domestic allowance       :";
      cin>>da;
      cout<<endl<<" personal pay             :";
      cin>>perpay;
      cout<<endl<<" HR Allowance             :";
      cin>>hra;
      cout<<endl<<" conveyance               :";
      cin>>conv;
      cout<<endl<<" over time                :";
      cin>>ot;
      cout<<endl<<" performance based bonous :";
      cin>>perfbas;
      total=basic+da+perpay+hra+conv+ot+perfbas;
    }

  void empmodread()
    {
      int teno,tage,tdojd,tdojm,tdojy;
      char tcity[20],tpost[10],tname[20],tgrade[3],tfname[20],tdoj[10];
      float tbasic,thr,tda,tperpay,thra,tconv,tot,tperfbas;


      cout<<endl<<"enter name               (enter '//' to retain old data) :";
      cin>>tname;
      if(strcmp(tname,"//")!=0)
	 strcpy(name,tname);
      cout<<endl<<"enter the emp no.        (enter 1 to retain old data)    :";
      cin>>teno;
      if(teno!=1)eno=teno;
      cout<<endl<<"enter the designation    (enter '//' to retain old data) :";
      cin>>tpost;
      if(strcmp(tpost,"//")!=0)
	 strcpy(post,tpost);
      cout<<endl<<"enter fathers name       (enter '//' to retain old data) :";
      cin>>tfname;
      if(strcmp(tfname,"//")!=0)
	 strcpy(fname,tfname);
      cout<<endl<<"enter  grade             (enter '//' to retain old data) :";
      cin>>tgrade;
      if(strcmp(tgrade,"//")!=0)
	 strcpy(grade,tgrade);
      cout<<endl<<"enter the city           (enter '//' to retain old data) :";
      cin>>tcity;
      if(strcmp(tcity,"//")!=0)
	 strcpy(city,tcity);
      cout<<endl<<"enter age                (enter '0' to retain old data)  :";
      cin>>tage;
      if(tage!=0)age=tage;
      cout<<endl<<"enter the date of join (dd mm yyyy)";
      cout<<endl<<"(enter '0 0 0' to retain old data:"<<endl;
      cin>>tdojd>>tdojm>>tdojy;
      if(tdojd!=0)dojd=tdojd;
      if(tdojm!=0)dojm=tdojm;
      if(tdojy!=0)dojy=tdojy;
      clrscr();
      cout<<endl<<"     PAYEMENT STRUCTURE   "<<endl;
      cout<<endl<<" basic pay                 (enter '-1' to retain old data) :";
      cin>>tbasic;
       if(tbasic!=-1)basic=tbasic;
      cout<<endl<<" domestic allowance        (enter '-1' to retain old data) :";
      cin>>tda;
       if(tda!=-1)da=tda;
       cout<<endl<<" personal pay             (enter '-1' to retain old data) :";
      cin>>tperpay;
       if(tperpay!=-1)perpay=tperpay;
       cout<<endl<<" HR Allowance             (enter '-1' to retain old data) :";
      cin>>thra;
       if(thra!=-1)hra=thr;
       cout<<endl<<" conveyance               (enter '-1' to retain old data) :";
      cin>>tconv;
       if(tconv!=-1)conv=tconv;
       cout<<endl<<" over time                (enter '-1' to retain old data) :";
      cin>>tot;
       if(tot!=-1)ot=tot;
       cout<<endl<<" performance based bonous (enter '-1' to retain old data) :";
      cin>>tperfbas;
       if(tperfbas!=-1)perfbas=tperfbas;
       total=basic+da+perpay+hra+conv+ot+perfbas;
    }



 int getdojy()
  {
   return dojy;
  }

 int getdojm()
  {
   return dojm;
  }

 int getdojd()
  {
   return dojd;
  }

 char *getname()
  {
   return name;
  }

 int geteno()
  {
   return eno;
  }

 int getage()
  {
   return age;
  }

 char *getcity()
  {
   return city;
  }

 char *getpost()
 {
  return post;
 }

 char *getgrade()
  {
   return grade;
  }

 char *getfname()
  {
   return fname;
  }

 float getbasic()
  {
   return basic;
  }

 float gethr()
  {
   return hr;
  }

 float getda()
  {
   return da;
  }

 float getperpay()
  {
   return perpay;
  }

 float gethra()
  {
   return hra;
  }

 float getconv()
  {
   return conv;
  }

 long int getsal()
  {
   return total;
  }

 float getot()
  {
   return ot;
  }

 float getperfbas()
  {
   return perfbas;
  }

 void empprint()
   {
    clrscr();
    cout<<endl<<endl;
    cout<<endl<<"\t\t*******Basic Details**********"<<endl;
    cout<<endl<<"\t\tName              :"<<name;
    cout<<endl<<"\t\tEmp no.           :"<<eno;
    cout<<endl<<"\t\tDesignation       :"<<post;
    cout<<endl<<"\t\tFathers name      :"<<fname;
    cout<<endl<<"\t\tGrade             :"<<grade;
    cout<<endl<<"\t\tcity              :"<<city;
    cout<<endl<<"\t\tAge               :"<<age;
    cout<<endl<<"\t\tDate of join      :"<<dojd<<" "<<dojm<<" "<<dojy;
    cout<<endl<<"\t\t*******PAYMENT STRUCTURE*******"<<endl;
    cout<<endl<<"\t\t Net total= Rs "<<total;
    cout<<endl<<"\t\t*******************************"<<endl;
   }
   void empthprint()
   {
    clrscr();
    cout<<endl<<"Name "<<"\t      Emp No. "<<"\tDesignation "<<"\tgrade "<<"\tCity"<<"\tAge"<<"\tSalary";
   }
   void emptcprint()
   {
    cout<<endl<<name<<"\t\t"<<eno<<"\t"<<post<<"\t\t"<<grade<<"\t"<<city<<"\t"<<age<<"\t"<<total;
   }
};

class pswd
 {
   char cheat[20];

    public:
     void setpswd(char *ab)
     {
      strcpy(cheat,ab);
     }
     void putpswd()
     {
      cout<<endl<<"UR pass word is "<<cheat;
     }
     char *cht()
     {
    return cheat;
     }
};

 void exitfun(); //initliazation of exit function

 void mainmenu();//initlization of main menu function

 void newpassword()
 { remove("pswd.dat");
   textbackground(0);
   textcolor(6);
   int flag=0;
   ofstream fout;
    pswd e3;
    char pas[20];
    clrscr();
    fout.open("pswd.dat",ios::out|ios::binary);
    if (!fout)
     {
       cout<<endl<<"\t\t\t| file cannot be opened |";
       cout<<endl<<"\t\t\t=========================";
       getch();
       exitfun();
      }

    while(flag==0)
     {
      cout<<endl<<"\t\t\t|-----------------------|";
      cout<<endl<<"\t\t\t| enter ur new password |";
      cout<<endl<<"\t\t\t|-----------------------|"<<endl<<"\t\t\t| ";
      cin>>pas;
      cout<<"\t\t\t|-----------------------|";
      flag++;
      e3.setpswd(pas);
      fout.write((char*)&e3,sizeof(e3));
      }
    fout.close();

     }

 void chgpassword()
 {
 clrscr();
 int flag=0,fag=0;
 pswd e3;
 textbackground(7);
 textcolor(0);
 char pas[20];
 ifstream fin;
 ofstream fout;
 fin.open("pswd.dat",ios::in|ios::binary);
 fout.open("temp.dat",ios::out|ios::binary);
 if(!fin||!fout)
 {
 cout<<endl<<"\t\t\t| file cannot open |";
 cout<<endl<<"\t\t\t--------------------";
 getch();
 exitfun();
 }
 cout<<endl<<"\t\t\t|-------------------------|";
 cout<<endl<<"\t\t\t| Enter Your Old Password |"<<endl<<"\t\t\t| ";
 cin>>pas;
 cout<<"\t\t\t|-------------------------|";
 while(fin)
 {
 fin.read((char*)&e3,sizeof(e3));
 if(strcmp(e3.cht(),pas)==0)
 flag=1;
 }
 if(flag==1)
 {
  cout<<endl<<"\t\t\t| Enter Your New Password |"<<endl<<"\t\t\t| ";
  cin>>pas;
  cout<<"\t\t\t|-------------------------|";
  while(fag==0)
  {
   e3.setpswd(pas);
   fout.write((char*)&e3,sizeof(e3));
   fag++;
  }
  fout.close();
  fin.close();
  remove("pswd.dat");
  rename("temp.dat","pswd.dat");
  cout<<endl<<"\t\t\t| Password Changed  !!! |";
  cout<<endl<<"\t\t\t--------------------------";
  getch();
 }
 else
 {
 cout<<endl<<"\t\t\t| Wrong Password Sorry !!! :( |";
 cout<<endl<<"\t\t\t-------------------------------";
 getch();
 mainmenu();
 }
 }

 void password()
 {
  textbackground(0);
  textcolor(6);
  int flag=0;
  pswd e3;
  char pas[20];

 clrscr();
 flag=0;
 char pass[20];
 for(int i=1;i<=410;i++)
 cout<<"  ";
 cout<<"----------------------";
 for(i=1;i<=29;i++)
 cout<<"  ";
 cout<<"|";
 delay(30);
 cout<<" ";
 delay(30);
 cout<<"E";
 delay(30);
 cout<<"N";
 delay( 30);
 cout<<"T";
 delay(30);
 cout<<"E";
 delay(30);
 cout<<"R";
 delay(30);
 cout<<" ";
 delay(30);
 cout<<"P";
 delay(30);
 cout<<"A";
 delay(30);
 cout<<"S";
 delay(30);
 cout<<"S";
 delay(30);
 cout<<"W";
 delay(30);
 cout<<"O";
 delay(30);
 cout<<"R";
 delay(30);
 cout<<"D";
 delay(30);
 cout<<" ";
 delay(30);
 cout<<"!";
 delay(30);
 cout<<"!";
 delay(30);
 cout<<"!";
 delay(30);
 cout<<" |";
 delay(30);
 cout<<endl<<"\t\t\t\t----------------------";
 cout<<endl<<"\t\t\t\t|   ";
 cin>>pass;
 cout<<"\t\t\t\t\t---------------------------------";


  ifstream fin;

  fin.open("pswd.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"\t\t\t\t\t\t| file cannot be opened |";
       cout<<endl<<"\t\t\t\t\t\t\t -----------------------";
       getch();
       exitfun();
      }

    while(fin.read((char*)&e3,sizeof(e3)))
     {
     fin.read((char*)&e3,sizeof(e3));
     if(strcmp(e3.cht(),pass)==0)
       flag=1;
     }

 fin.close();

 if(flag==0)
 {
 textattr(4);
 cprintf("                                                                    ACESS DENIED\r");
 getch();
 exitfun();
 }
 else
 {
  textattr(2);
  cprintf("                                                                   ACESS GRANETD\r");
  getch();
 }
   getch();
 }

 void exitfun()  //exit function to exit a program
  {
  textbackground(7);
  textcolor(0);
  clrscr();
  int i,j,a=100;
  cout<<endl<<"\t\t Thanxx For Using this Program  "<<endl;
  cout<<endl<<"\t\t\t -- Have A Good Time Programming ";
  cout<<endl<<endl<<"\t\t\t\t------------------- Made By "<<endl<<endl;
/*   for(i=1;i<=8;i++)
    {
	 for(j=1;j<=70;j++)
	 if((j==1&&i==1)||(j==1&&i==2)||(j==1&&i==3)||(j==1&&i==4)||(j==1&&i==8)||(i==1&&j==2)||(j==2&&i==4)||(j==2&&i==8)||(j==3&&i==1)||(j==3&&i==4)||(j==3&&i==8)||(j==4&&i==1)||(j==4&&i==4)||(j==4&&i==8)||(j==5&&i==1)||(j==5&&i==4)||(j==5&&i==8)||(j==5&&i==5)||(j==5&&i==6)||(j==5&&i==7)||(j==9)||(j==10&&i==1)||(j==10&&i==5)||(j==11&&i==1)||(j==11&&i==5)||(j==12&&i==1)||(j==12&&i==5)||(j==13&&i==1)||(j==13&&i==5)||(j==14)||(j==17&&i==1)||(j==17&&i==8)||(j==18&&i==1)||(j==18&&i==8)||(j==19)||(j==20&&i==1)||(j==20&&i==8)||(j==21&&i==1)||(j==21&&i==8)||(j==25)||(j==26&&i==4)||(j==26&&i==5)||(j==27&&i==3)||(j==27&&i==6)||(j==28&&i==2)||(j==28&&i==7)||(j==29&&i==1)||(j==29&&i==8)||(j==33&&i==1)||(j==33&&i==8)||(j==34&&i==1)||(j==34&&i==8)||(j==35)||(j==36&&i==1)||(j==36&&i==8)||(j==37&&i==1)||(j==37&&i==8)||(j==41)||(j==42&&i==1)||(j==42&&i==4)||(j==43&&i==1)||(j==43&&i==4)||(j==43&&i==6)||(j==44&&i==1)||(j==44&&i==4)||(j==44&&i==7)||(j==45&&i==1)||(j==45&&i==2)||(j==45&&i==3)||(j==45&&i==4)||(j==45&&i==8)||
	 (j==49)||(j==50&&i==1)||(j==50&&i==5)||(j==51&&i==1)||(j==51&&i==5)||(j==52&&i==1)||(j==52&&i==5)||(j==53&&i==1)||(j==53&&i==5)||(j==54)||(j==57)||(j==58&&i==2)||(j==59&&i==3)||(j==60&&i==4)||(j==61&&i==5)||(j==62&&i==6)||(j==63&&i==7)||(j==64))
	 cout<<"*";
	 else
	 cout<<" ";
	 sound(a);
	 delay(500);
	 cout<<endl;
	 a+=100;

     }
     nosound();
  getch();
  clrscr();     */
  cout<<endl<<endl<<endl<<endl;
  cout<<endl<<"                  Programed By- ";
  cout<<endl<<endl<<"                         Name:Harsh Patel And Saikiran Sondarkar";
  cout<<endl<<"                               Computer Sci and Engg. 2nd year       ";
  cout<<endl<<"                                    Roll No. : CSE-1F-002,CSE-1F-003 ";
  getch();
  exit(0);

 }

void totemp()
 {
  char ch;
  int a=0;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
      a++;
     }
     cout<<endl<<"The total No of employs working in the company "<<a;
     cout<<endl<<"Do U want to look the details ";
     cin>>ch;
     if(ch=='y'||ch=='Y')
     {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
   }
  fin.close();
 }

void totage()
 {
  char ch='n';
  int a=0,age1,age2,c,d;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    cout<<endl<<"enter the age age limits lower and upper ";
    cin>>c>>d;
    if(c>d)
    {
    age1=d;
    age2=c;
    }
    else
    {
    age1=c;
    age2=d;
    }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
      if(e3.getage()>=age1&&e3.getage()<=age2)
      a++;
     }
     cout<<endl<<"The total No of employs working in the company with age limit "<<age1<<"and "<<age2<<" are : "<<a;
     getch();
     if(a>=1)
     {
     cout<<endl<<"Want to see the details (y/n) ";
     cin>>ch;
     }
     if(ch=='y'||ch=='Y')
       {
  int a1,a2,flag=0;
  char ch;

  a1=age1;
  a2=age2;
  ifstream fin;
  emp e3;
  clrscr();
  fin.open("emp01.dat",ios::in|ios::binary);
  if (!fin)
   {
     cout<<endl<<"File Can not Open ";
     exitfun();
   }
  while(fin.read((char*)&e3,sizeof(e3)))
    {
       if((e3.getage()>=a1)&&(e3.getage()<=a2))
	 {
	  e3.empprint();
	  flag=1;
	  getch();
	 }
    }
  if(flag==0)
  cout<<endl<<"Record Not Found ................ ";
  fin.close();
 }
    fin.close();
 }


void totrsal()
 {
  char ch='n';
  double sal1,sal2,c,d;
  int a=0;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    cout<<endl<<"enter the salary age limits lower and upper ";
    cin>>c>>d;
    if(c>d)
    {
    sal1=d;
    sal2=c;
    }
    else
    {
    sal1=c;
    sal2=d;
    }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
      if(e3.getsal()>=sal1&&e3.getsal()<=sal2)
      a++;
     }
     cout<<endl<<"The total No of employs working in the company with salary limit "<<sal1<<"and "<<sal2<<" are : "<<a;
     getch();
     if(a>=1)
     {
     cout<<endl<<"Want to see the details (y/n) ";
     cin>>ch;
     }
     if(ch=='y'||ch=='Y')
       {
  double a1,a2;
  int flag=0;
  char ch;

  a1=sal1;
  a2=sal2;
  ifstream fin;
  emp e3;
  clrscr();
  fin.open("emp01.dat",ios::in|ios::binary);
  if (!fin)
   {
     cout<<endl<<"File Can not Open ";
     exitfun();
   }
  while(fin.read((char*)&e3,sizeof(e3)))
    {
       if((e3.getsal()>=a1)&&(e3.getsal()<=a2))
	 {
	  e3.empprint();
	  flag=1;
	  getch();
	 }
    }
  if(flag==0)
  cout<<endl<<"Record Not Found ................ ";
  fin.close();
 }
    fin.close();
 }

void totcost()
{
    float tsal=0.0;
    char ch;
    ifstream fin;
    emp e3;

    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {

     tsal=tsal+e3.getsal();
     }
     cout<<endl<<"the total cost to the company is :"<<tsal;
     getch();
    fin.close();
 }

void totgrade()
 {
  char ch='n',grade[3];
  int a=0;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    cout<<endl<<"enter the grade of the employ ";
    cin>>grade;

    while(fin.read((char*)&e3,sizeof(e3)))
     {
      if(e3.getgrade()==grade)
      a++;
     }
     cout<<endl<<"The total No of employs working in the company with grade "<<grade<<" are : "<<a;
     getch();
     if(a>=1)
     {
     cout<<endl<<"Want to see the details (y/n) ";
     cin>>ch;
     }
     if(ch=='y'||ch=='Y')

	{
	  char grade1[3],ch;
	  int flag=0;
	  strcpy(grade1,grade);
	  ifstream fin;
	  emp e3;
	  clrscr();
	   fin.open("emp01.dat",ios::in|ios::binary);
	  if (!fin)
	    {
	     cout<<endl<<"File Can not Open ";
	     exitfun();
	    }
	 while(fin.read((char*)&e3,sizeof(e3)))
	   {
	    if(strcmp(e3.getgrade(),grade1)==0)
	     {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	     getch();
	   }
      }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }
  fin.close();
 }


void totcity()
 {
  char ch='n',city[20];
  int a=0;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    cout<<endl<<"enter the City of the employ ";
    cin>>city;

    while(fin.read((char*)&e3,sizeof(e3)))
     {
      if(e3.getcity()==city)
      a++;
     }
     cout<<endl<<"The total No of employs working in the company while livingin city : "<<city<<" are : "<<a;
     getch();
     if(a>=1)
     {
     cout<<endl<<"Want to see the details (y/n) ";
     cin>>ch;
     }
     if(ch=='y'||ch=='Y')

	{
	  char city1[3],ch;
	  int flag=0;
	  strcpy(city1,city);
	  ifstream fin;
	  emp e3;
	  clrscr();
	   fin.open("emp01.dat",ios::in|ios::binary);
	  if (!fin)
	    {
	     cout<<endl<<"File Can not Open ";
	     exitfun();
	    }
	 while(fin.read((char*)&e3,sizeof(e3)))
	   {
	    if(strcmp(e3.getcity(),city1)==0)
	     {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	     getch();
	   }
      }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }
  fin.close();
 }

 void totpost()
 {
  char ch='n',post[20];
  int a=0;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    cout<<endl<<"enter the Designation of the employ ";
    cin>>post;

    while(fin.read((char*)&e3,sizeof(e3)))
     {
      if(e3.getpost()==post)
      a++;
     }
     cout<<endl<<"The total No of employs working in the company with designation   "<<post<<" are : "<<a;
     getch();
     if(a>=1)
     {
     cout<<endl<<"Want to see the details (y/n) ";
     cin>>ch;
     }
     if(ch=='y'||ch=='Y')

	{
	  char post1[3],ch;
	  int flag=0;
	  strcpy(post1,post);
	  ifstream fin;
	  emp e3;
	  clrscr();
	   fin.open("emp01.dat",ios::in|ios::binary);
	  if (!fin)
	    {
	     cout<<endl<<"File Can not Open ";
	     exitfun();
	    }
	 while(fin.read((char*)&e3,sizeof(e3)))
	   {
	    if(strcmp(e3.getpost(),post1)==0)
	     {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	     getch();
	   }
      }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }
  fin.close();
 }


  void stats()  //paste function to execute stats data by type
  {
    clrscr();
    int opt;
    do{
	cout<<endl<<"\t\t*****************Stats Menu******************** ";
	cout<<endl<<"\t\t*             enter ur choice                  *";
	cout<<endl<<"\t\t* 1.  Total memebers working in the company    *";
	cout<<endl<<"\t\t* 2.  Total cost for the company               *";
	cout<<endl<<"\t\t* 3.  Total memebers in a given age group      *";
	cout<<endl<<"\t\t* 4.  Total memebers in a given salary group   *";
	cout<<endl<<"\t\t* 5.  Total members in a given grade           *";
	cout<<endl<<"\t\t* 6.  Total members of the given degnation     *";
	cout<<endl<<"\t\t* 7.  Total members of from a given city       *";
	cout<<endl<<"\t\t* 8.  Go To Main Menu                          *";
	cout<<endl<<"\t\t* 9.  Exit                                     *";
	cout<<endl<<"\t\t*     Enter Ur Choice \\|/                      *";
	cout<<endl<<"\t\t*                      ";
	cin>>opt;
	cout<<endl<<"\t\t************************************************* "<<endl;
	switch(opt)
	     {
	       case 1:totemp();
	       break;
	       case 2:totcost();
	       break;
	       case 3:totage();
	       break;
	       case 4:totrsal();
	       break;
	       case 5:totgrade();
	       break;
	       case 6:totpost();
	       break;
	       case 7:totcity();
	       break;
	       case 8:mainmenu();
	       break;
	       case 9: exitfun();
	       break;
	     }
      }
	while(opt>=1||opt<=10);

  }


void printmf() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;

    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }
 void printmft() //print function to print the data of main file tubular
 {
    ifstream fin;
    emp e3;

    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    e3.empthprint();
    while(fin.read((char*)&e3,sizeof(e3)))
    e3.emptcprint();
    getch();
    fin.close();
 }

 void name_print()//print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("namecopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

 void eno_print() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("enocopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

  void age_print() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("agecopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

  void post_print() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("postcopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

  void grade_print() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("gradecopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

  void city_print() //print function to print the data of main file
 {
    char ch;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("citycopy.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
     e3.empprint();
     getch();
     }
    fin.close();
 }

  void print()  //print function to execute print data by type
  {
    clrscr();
    int opt;
    do{ clrscr();
	cout<<endl<<"\t\t\t**************Search Menu*************";
	cout<<endl<<"\t\t\t*     enter ur choice                *";
	cout<<endl<<"\t\t\t* 1.  Print Sorted Name File         *";
	cout<<endl<<"\t\t\t* 2.  Print Sorted Employ No.File    *";
	cout<<endl<<"\t\t\t* 3.  Print Sorted Age Grp File      *";
	cout<<endl<<"\t\t\t* 4.  Print Sorted Designation File  *";
	cout<<endl<<"\t\t\t* 5.  Print Sorted Grade File        *";
	cout<<endl<<"\t\t\t* 6.  Print Sorted City File         *";
	cout<<endl<<"\t\t\t* 7.  Go To Main Menu                *";
	cout<<endl<<"\t\t\t* 8.  Exit                           *";
	cout<<endl<<"\t\t\t*     Enter Ur Choice \\|/            *";
	cout<<endl<<"\t\t\t*                      ";
	cin>>opt;
	cout<<endl<<"\t\t\t***************************** "<<endl;
	switch(opt)
	     {
	       case 1:totcost();//name_print();
	       break;
	       case 2:eno_print();
	       break;
	       case 3:age_print();
	       break;
	       case 4:post_print();
	       break;
	       case 5:grade_print();
	       break;
	       case 6:city_print();
	       break;
	       case 7:mainmenu();
	       break;
	       case 8: exitfun();
	       break;
	     }
      }
	while(opt>=1||opt<=10);

  }

 void create()
  {
    clrscr();
    ofstream fout;
    fout.open("emp01.dat",ios::out|ios::binary);
    cout<<endl<<"file created .........."<<endl<<endl;
    fout.close();
  };


 void add()
  {
    ofstream fout;
    fout.open("emp01.dat",ios::app|ios::binary);
    clrscr();
    emp e2;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
      e2.empread();
      fout.write((char*)&e2,sizeof(e2));
      clrscr();
      cout<<endl<<"Data Successfully Updated "<<endl<<endl;
      cout<<endl<<"Want To Enter More Data (y/n)";
      cin>>ans;
    }
    fout.close();

  };


 void name_srh()
  {
    char name[20];
    int flag=0;
    cout<<"Enter Emp Name for Search ";
    cin>>name;
    ifstream fin;
    emp e3;
    clrscr();
    fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
    while(fin.read((char*)&e3,sizeof(e3)))
     {
       if(strcmp(e3.getname(),name)==0)
	{
	  cout<<endl<<"Record Found ................ \n ";
	  e3.empprint();
	  flag=1;
	}
     }
    if(flag==0)
    cout<<endl<<"Record Not Found ................ ";
    fin.close();
  }



 void eno_srh()
  {
   int eno,flag=0;
   cout<<"Enter Emp No for Search ";
   cin>>eno;
   ifstream fin;
   emp e3;
   clrscr();
   fin.open("emp01.dat",ios::in|ios::binary);
   if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
   while(fin.read((char*)&e3,sizeof(e3)))
       {
	 if(e3.geteno()==eno)
	  {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	  }
       }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }

 void age_srh()
  {
  int age1,age2,flag=0;
  char ch;
  cout<<"Enter Age Group Lower And Upper For Search ";
  cin>>age1>>age2;
  ifstream fin;
  emp e3;
  clrscr();
  fin.open("emp01.dat",ios::in|ios::binary);
  if (!fin)
   {
     cout<<endl<<"File Can not Open ";
     exitfun();
   }
  while(fin.read((char*)&e3,sizeof(e3)))
    {
       if((e3.getage()>=age1)&&(e3.getage()<=age2))
	 {
	  cout<<endl<<"Record Found ................ \n ";
	  e3.empprint();
	  flag=1;
	  getch();
	 }
    }
  if(flag==0)
  cout<<endl<<"Record Not Found ................ ";
  fin.close();
 }

 void post_srh()
  {
   char post[20],ch;
   int flag=0;
   cout<<"Enter designation for Search ";
   cin>>post;
   ifstream fin;
   emp e3;
   clrscr();
   fin.open("emp01.dat",ios::in|ios::binary);
   if (!fin)
     {
      cout<<endl<<"File Can not Open ";
      exitfun();
     }
   while(fin.read((char*)&e3,sizeof(e3)))
     {
       if(strcmp(e3.getpost(),post)==0)
	  {
	    cout<<endl<<"Record Found ................ \n ";
	    e3.empprint();
	    flag=1;
	    getch();
	  }
     }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }

 void grade_srh()
  {
   char grade[3],ch;
   int flag=0;
   cout<<"Enter Grade For Search ";
   cin>>grade;
   ifstream fin;
   emp e3;
   clrscr();
   fin.open("emp01.dat",ios::in|ios::binary);
   if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
   while(fin.read((char*)&e3,sizeof(e3)))
      {
	if(strcmp(e3.getgrade(),grade)==0)
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	     getch();
	   }
      }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }


 void city_srh()
  {
   char city[20],ch;
   int flag=0;
   cout<<"Enter City for Search ";
   cin>>city;
   ifstream fin;
   emp e3;
   clrscr();
   fin.open("emp01.dat",ios::in|ios::binary);
   if (!fin)
     {
       cout<<endl<<"File Can not Open ";
       exitfun();
     }
   while(fin.read((char*)&e3,sizeof(e3)))
     {
       if(strcmp(e3.getcity(),city)==0)
	  {
	     cout<<endl<<"Record Found ................ \n ";
	     e3.empprint();
	     flag=1;
	     getch();
	  }
     }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
  }



 void eno_copy()
  {
   int empno,flag=0;
   char ans='y';
   ifstream fin;
   ofstream fout;
   emp e3;
   clrscr();
   fout.open("temp.dat",ios::out|ios::binary);
   fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
      {
	cout<<endl<<"File Can not Open ";
	exitfun();
      }
    while(ans=='y'||ans=='Y')
    {
     while(fin.read((char*)&e3,sizeof(e3)))
      {
	 cout<<"Enter Employ No. To Paste In Another file  :";
	 cin>>empno;
	if(e3.geteno()==empno)
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     fout.write((char*)&e3,sizeof(e3));
	     flag=1;
	   }
	   clrscr();
	   cout<<endl<<"Data Sussesfully Copied ";
	   cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	   cin>>ans;
	   if(ans!='y'||ans!='Y')
	   break;
      }
    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("enocopy.dat");
   rename("temp.dat","enocopy.dat");
  }

  void name_copy()
  {
   int flag=0;
   char ans='y',name[51];
   ifstream fin;
   ofstream fout;
   emp e3;
   clrscr();
   fout.open("temp.dat",ios::out|ios::binary);
   fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
      {
	cout<<endl<<"File Can not Open ";
	exitfun();
      }
    while(ans=='y'||ans=='Y')
    {
     while(fin.read((char*)&e3,sizeof(e3)))
      {
	 cout<<"Enter Name To Paste In Another file : ";
	 cin>>name;
	if(strcmp(e3.getname(),name)==0)
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     fout.write((char*)&e3,sizeof(e3));
	     flag=1;
	   }
	   clrscr();
	   cout<<endl<<"Data Sussesfully Copied ";
	   cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	   cin>>ans;
	   if(ans!='y'||ans!='Y')
	   break;
      }

    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("namecopy.dat");
   rename("temp.dat","namecopy.dat");
  }

 void age_copy()
  {
   int age1,age2,flag=0;
   char ans='y';
   ifstream fin;
   ofstream fout;
   emp e3;
   clrscr();
   fout.open("temp.dat",ios::out|ios::binary);
   fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
      {
	cout<<endl<<"File Can not Open ";
	exitfun();
      }
    while(ans=='y'||ans=='Y')
    {
     while(fin.read((char*)&e3,sizeof(e3)))
      {
	 cout<<"Enter Age (Lower and Upper)  Employ No. To Paste In Another file : ";
	 cin>>age1>>age2;
	if((e3.getage()>=age1)&&(e3.getage()<=age2))
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     fout.write((char*)&e3,sizeof(e3));
	     flag=1;
	   }
	   clrscr();
	   cout<<endl<<"Data Sussesfully Copied ";
	   cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	   cin>>ans;
	   if(ans!='y'||ans!='Y')
	   break;
      }
    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("agecopy.dat");
   rename("temp.dat","agecopy.dat");
  }


  void post_copy()
  {
   int flag=0;
   char ans='y',post[51];
   ifstream fin;
   ofstream fout;
   emp e3;
   clrscr();
   fout.open("temp.dat",ios::out|ios::binary);
   fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
      {
	cout<<endl<<"File Can not Open ";
	exitfun();
      }
    while(ans=='y'||ans=='Y')
    {
     while(fin.read((char*)&e3,sizeof(e3)))
      {
	 cout<<"Enter Employ Designation To Paste In Another file Name : ";
	 cin>>post;
	if(strcmp(e3.getpost(),post)==0)
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     fout.write((char*)&e3,sizeof(e3));
	     flag=1;
	   }
	   clrscr();
	   cout<<endl<<"Data Sussesfully Copied ";
	   cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	   cin>>ans;
	   if(ans!='y'||ans!='Y')
	   break;
      }

    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("postcopy.dat");
   rename("temp.dat","postcopy.dat");
  }

    void grade_copy()
  {
   int flag=0;
   char ans='y',grade[51];
   ifstream fin;
   ofstream fout;
   emp e3;
   clrscr();
   fout.open("temp.dat",ios::out|ios::binary);
   fin.open("emp01.dat",ios::in|ios::binary);
    if (!fin)
      {
	cout<<endl<<"File Can not Open ";
	exitfun();
      }
    while(ans=='y'||ans=='Y')
    {
     while(fin.read((char*)&e3,sizeof(e3)))
      {
	 cout<<"Enter Employ Grade To Paste In Another file : ";
	 cin>>grade;
	if(strcmp(e3.getgrade(),grade)==0)
	   {
	     cout<<endl<<"Record Found ................ \n ";
	     fout.write((char*)&e3,sizeof(e3));
	     flag=1;
	   }
	   clrscr();
	   cout<<endl<<"Data Sussesfully Copied ";
	   cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	   cin>>ans;
	   if(ans!='y'||ans!='Y')
	   break;
      }

    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("gradecopy.dat");
   rename("temp.dat","gradecopy.dat");
  }

    void city_copy()
    {
     int flag=0;
     char ans='y',city[51];
     ifstream fin;
     ofstream fout;
     emp e3;
     clrscr();
     fout.open("temp.dat",ios::out|ios::binary);
     fin.open("emp01.dat",ios::in|ios::binary);
      if (!fin)
	{
	 cout<<endl<<"File Can not Open ";
	 exitfun();
	}
     while(ans=='y'||ans=='Y')
      {
	while(fin.read((char*)&e3,sizeof(e3)))
	 {
	  cout<<"Enter Employ City To Paste In Another file : ";
	  cin>>city;
	    if(strcmp(e3.getcity(),city)==0)
	     {
	      cout<<endl<<"Record Found ................ \n ";
	      fout.write((char*)&e3,sizeof(e3));
	      flag=1;
	     }
	  clrscr();
	  cout<<endl<<"Data Sussesfully Copied ";
	  cout<<endl<<"Want To Paste More Data (y/n)"<<endl;
	  cin>>ans;
	    if(ans!='y'||ans!='Y')
	     break;
      }

    }
   if(flag==0)
   cout<<endl<<"Record Not Found ................ ";
   fin.close();
   fout.close();
   remove("citycopy.dat");
   rename("temp.dat","citycopy.dat");
  }

  void copy()  //paste function to execute copy data by type
  {
    clrscr();
    int opt;
    do{
	cout<<endl<<"\t\t\t*********Search Menu******** ";
	cout<<endl<<"\t\t\t*     enter ur choice       *";
	cout<<endl<<"\t\t\t* 1.  Copy By Name          *";
	cout<<endl<<"\t\t\t* 2.  Copy By Employ No.    *";
	cout<<endl<<"\t\t\t* 3.  Copy By Age Grp       *";
	cout<<endl<<"\t\t\t* 4.  Copy By Designation   *";
	cout<<endl<<"\t\t\t* 5.  Copy By Grade         *";
	cout<<endl<<"\t\t\t* 6.  Copy By City          *";
	cout<<endl<<"\t\t\t* 7.  Go To Main Menu       *";
	cout<<endl<<"\t\t\t* 8.  Exit                  *";
	cout<<endl<<"\t\t\t*     Enter Ur Choice \\|/   *";
	cout<<endl<<"\t\t\t*                      ";
	cin>>opt;
	cout<<endl<<"\t\t\t***************************** "<<endl;
	switch(opt)
	     {
	       case 1:name_copy();
	       break;
	       case 2:eno_copy();
	       break;
	       case 3:age_copy();
	       break;
	       case 4:post_copy();
	       break;
	       case 5:grade_copy();
	       break;
	       case 6:city_copy();
	       break;
	       case 7:mainmenu();
	       break;
	       case 8: exitfun();
	       break;
	     }
      }
	while(opt>=1||opt<=10);

  }

 void printm();

 void mdelete(); //initilization of delete menu

 void ndelete(); //initilization of delete function to delete data by name

 void edelete(); //initilization of delete funcion to delete data by employ No.

 void search();  //initilization of search function

 void modify();  //initilization of modify function

 void modifyeno(); //initilization of modify function based on employ No.

 void modifyname(); //initilization of modiyf function based on employ name

 void mainmenu() //functoion with mainmenu options
  {
    int option;
    clrscr();
    ofstream fout;
    ifstream fin;
    emp e1;
      do{
	 clrscr();
	 cout<<endl<<endl<<endl<<endl<<endl;
	 cout<<endl<<"\t\t\t&&&&&&&&& Enter Ur Choice &&&&&&&&&";
	 cout<<endl<<"\t\t\t| 1. Create A File                |";
	 cout<<endl<<"\t\t\t| 2. Add Data To File             |";
	 cout<<endl<<"\t\t\t| 3. Print Full Record            |";
	 cout<<endl<<"\t\t\t| 4. Search                       |";
	 cout<<endl<<"\t\t\t| 5. Modify Records               |";
	 cout<<endl<<"\t\t\t| 6  Delete Data From Main File   |";
	 cout<<endl<<"\t\t\t| 7. Copy Data to Other Files     |";
	 cout<<endl<<"\t\t\t| 8. Print Data From Sorted Files |";
	 cout<<endl<<"\t\t\t| 9. Go to stats                  |";
	 cout<<endl<<"\t\t\t| 10. Change Password             |";
	 cout<<endl<<"\t\t\t| 11. Exit                        |";
	 cout<<endl<<"\t\t\t| Enter Option  \\|/               |";
	 cout<<endl<<"\t\t\t|                ";
	 cin>>option;


	 switch(option)
	     {
	       case 1:create();
	       break;
	       case 2:add();
	       break;
	       case 3:printm();
	       break;
	       case 4:search();
	       break;
	       case 5:modify();
	       break;
	       case 6:mdelete();
	       break;
	       case 7:copy();
	       break;
	       case 8:print();
	       break;
	       case 9:stats();
	       break;
	       case 10:chgpassword();
	       break;
	       case 11:exitfun();

	     }
	}
       while(option>=1||option<=11);
  }


   void printm()
 {
  int option;
  clrscr();
  do
   {
   clrscr();
    cout<<endl<<"\t\t\t*&*&*&*&*&*& modify menu*&*&*&*&*&*";
    cout<<endl<<"\t\t\t|  1. Print Data singlular        |";
    cout<<endl<<"\t\t\t|  2. Print Data Tabular          |";
    cout<<endl<<"\t\t\t|  3. Return To Main Menu         |";
    cout<<endl<<"\t\t\t|  4. Exit                        |";
    cout<<endl<<"\t\t\t|                            \\|/  |";
    cout<<endl<<"\t\t\t			      ";
    cin>>option;
    cout<<endl<<"\t\t\t*&*&*&*&*&*&*&*&*&*&*&*&*&*&&*&*&*&";

      switch(option)
       {
	 case 1:printmf();
	  break;
	 case 2:printmft();
	  break;
	 case 3:mainmenu();
	  break;
	 case 4:exitfun();
       }
     }while(option>=1||option<=4);
 }

  void edelete()
  {
   ifstream fin;
   ofstream fout;
   emp e1;
   int empno,flag=0;
   clrscr();
   cout<<endl<<"Enter Employ No To Delete From Records "<<endl;
   cin>>empno;
   fin.open("emp01.dat",ios::in|ios::binary);
   fout.open("TEMP.DAT",ios::out|ios::binary);
   if (!fin||!fout)
     {
	cout<<endl<<"File Can Not Open ";
	exitfun();
     }
   while(!fin.eof())
     {
	fin.read((char*)&e1,sizeof(e1));
	if(e1.geteno()!=empno)
	{
		flag=0;
		fout.write((char*)&e1,sizeof(e1));
	}
	else
	flag=1;
     }
   if (flag==0)
      cout<<endl<<endl<<"Record Not Found...!! "<<endl<<endl;
      else
      cout<<endl<<endl<<"Record Found And Record Deleted.. "<<endl<<endl;
   fin.close();
   fout.close();
   remove("emp01.dat");
   rename("TEMP.DAT","emp01.dat");

  }

   void ndelete()
  {
   ifstream fin;
   ofstream fout;
   emp e1;
   int flag=0;
   char name[51];
   clrscr();
   cout<<endl<<"Enter Employ Name To Delete From Records "<<endl;
   cin>>name;
   fin.open("emp01.dat",ios::in|ios::binary);
   fout.open("TEMP.DAT",ios::out|ios::binary);
   if (!fin||!fout)
     {
	cout<<endl<<"File Can Not Open ";
	exitfun();
     }
   while(!fin.eof())
     {
	fin.read((char*)&e1,sizeof(e1));
	if(strcmp(e1.getname(),name))
	{
		flag=0;
		fout.write((char*)&e1,sizeof(e1));
	}
	else
	flag=1;
     }
   if (flag==0)
      cout<<endl<<endl<<"Record Not Found...!! "<<endl<<endl;
      else
      cout<<endl<<endl<<"Record Found And Deleted.. "<<endl<<endl;
   fin.close();
   fout.close();
   remove("emp01.dat");
   rename("TEMP.DAT","emp01.dat");

  }

 void mdelete()
 {
  int option;
  clrscr();
  do
   {
    cout<<endl<<"\t\t\t*&*&*&*&*&*& modify menu*&*&*&*&*&*";
    cout<<endl<<"\t\t\t|  1. Delete Data By Employ No.   |";
    cout<<endl<<"\t\t\t|  2. Delete Data By Employ Name  |";
    cout<<endl<<"\t\t\t|  3. Return To Main Menu         |";
    cout<<endl<<"\t\t\t|  4. Exit                        |";
    cout<<endl<<"\t\t\t|                            \\|/  |";
    cout<<endl<<"\t\t\t			      ";
    cin>>option;
    cout<<endl<<"\t\t\t*&*&*&*&*&*&*&*&*&*&*&*&*&*&&*&*&*&";

      switch(option)
       {
	 case 1:edelete();
	  break;
	 case 2:ndelete();
	  break;
	 case 3:mainmenu();
	  break;
	 case 4:exitfun();
       }
     }while(option>=1||option<=4);
 }

 void modify()
 {
  int option;
  clrscr();
  do
   {
   clrscr();
    cout<<endl<<"\t\t\t*&*&*&*&*&*& modify menu*&*&*&*&*&*";
    cout<<endl<<"\t\t\t|  1. Modify Data By Employ No.   |";
    cout<<endl<<"\t\t\t|  2. Modify Data By Employ Name  |";
    cout<<endl<<"\t\t\t|  3. Return To Main Menu         |";
    cout<<endl<<"\t\t\t|  4. Exit                        |";
    cout<<endl<<"\t\t\t|                            \\|/  |";
    cout<<endl<<"\t\t\t			      ";
    cin>>option;
    cout<<endl<<"\t\t\t*&*&*&*&*&*&*&*&*&*&*&*&*&*&&*&*&*&";

      switch(option)
       {
	 case 1:modifyeno();
	  break;
	 case 2:modifyname();
	  break;
	 case 3:mainmenu();
	  break;
	 case 4:exitfun();
       }
     }while(option>=1||option<=4);
 }


 void modifyeno()  //function to modify the data by searching employ No.
  {
  ifstream fin;
  ofstream fout;
  emp e3;
  int empno,flag=0;
  clrscr();
  cout<<endl<<"Enter Employ No To Modify"<<endl;
  cin>>empno;
  fin.open("emp01.dat",ios::in|ios::binary);
  fout.open("TEMP.DAT",ios::out|ios::binary);
   if (!fin||!fout)
     {
      cout<<endl<<"File Can not Open ";
      exitfun();
     }
   while(!fin.eof())
     {
   fin.read((char*)&e3,sizeof(e3));
    if(e3.geteno()==empno)
      {
       e3.empmodread();
       flag=1;
       break;
      }
   fout.write((char*)&e3,sizeof(e3));
     }
if(flag==0)
cout<<endl<<"Record Not Found ";
fin.close();
fout.close();
remove("emp01.dat");
rename("TEMP.DAT","emp01.dat");
}

 void modifyname()  //function to modify the data by searching employ Name
  {
  ifstream fin;
  ofstream fout;
  emp e3;
  int flag=0;
  char name[51];
  clrscr();
  cout<<endl<<"Enter Employ Name To Modify"<<endl;
  cin>>name;
  fin.open("emp01.dat",ios::in|ios::binary);
  fout.open("TEMP.DAT",ios::out|ios::binary);
   if (!fin||!fout)
     {
      cout<<endl<<"File Can not Open ";
      exitfun();
     }
   while(fin.read((char*)&e3,sizeof(e3)))
     {
  fin.read((char*)&e3,sizeof(e3));
   if(strcmp(e3.getname(),name)==0)
    {
     e3.empmodread();
     flag=1;
     break;
    }
  fout.write((char*)&e3,sizeof(e3));
 }
 if(flag==0)
 cout<<endl<<"Record Not Found ";
 fin.close();
 fout.close();
 remove("emp01.dat");
 rename("TEMP.DAT","emp01.dat");

  }

 void search()  //search function to executr search by type
  {
    clrscr();
    int opt;
    do{
	cout<<endl<<"\t\t\t*********Search Menu******** ";
	cout<<endl<<"\t\t\t*     enter ur choice       *";
	cout<<endl<<"\t\t\t* 1.  Search By Name        *";
	cout<<endl<<"\t\t\t* 2.  Search By Employ No.  *";
	cout<<endl<<"\t\t\t* 3.  Search By Age Grp     *";
	cout<<endl<<"\t\t\t* 4.  Search By Designation *";
	cout<<endl<<"\t\t\t* 5.  Search By Grade       *";
	cout<<endl<<"\t\t\t* 6.  Search By City        *";
	cout<<endl<<"\t\t\t* 7.  Go To Main Menu       *";
	cout<<endl<<"\t\t\t* 8.  Exit                  *";
	cout<<endl<<"\t\t\t     Enter Ur Choice \\|/    *"<<endl<<"\t\t\t*                      ";
	cin>>opt;
	cout<<endl<<"\t\t\t***************************** "<<endl;
	switch(opt)
	     {
	       case 1:name_srh();
	       break;
	       case 2:eno_srh();
	       break;
	       case 3:age_srh();
	       break;
	       case 4:post_srh();
	       break;
	       case 5:grade_srh();
	       break;
	       case 6:city_srh();
	       break;
	       case 7:mainmenu();
	       break;
	       case 8: exitfun();
	       break;
	     }
      }
	while(opt>=1||opt<=10);

  }

  void main() //main function of the program
  {
   clrscr();
  //newpassword();
   password();
   textcolor(BLACK);
   textbackground(7+BLINK);
   mainmenu();  //calls main menu function
   getch();
  }


