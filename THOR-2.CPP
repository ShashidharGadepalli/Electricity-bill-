#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
int x=0;
void wo();
void so();
void se();
void de();
void me();
void canos();
void phnos();
void unitss();
void prices();
void names();
void deca();
void deph();
void dena();
void meph();
void mena();


class elec
{ int cano;
 float u;
 float r;
 float p;
 long long long phno;
 char name[20];

 public:
 int x;
 void add();
 void show();
 void modify();
 void search();
 void del();
 void mod();



 int retcano()
 {return cano;}
 char* retname()
 {return name;}
 float retu()
 { return u;}
 float retr()
 {return r;}
 float retp()
 {return p;}

  long long retphno()
  {return phno;}



 }ob;
 void elec::add()
 { clrscr();

   randomize();
   cano=random(50)+3000;


  cout<<"cano "<<cano;
  cout<<"\nenter name ";
  gets(name);
  cout<<"\nenter phone no ";
  cin>>phno;
  cout<<"\nenter quantity ";
  cin>>u;
  if(u<100)
  {cout<<"\nunit rate=5";
  p=u*5;
  }
  else if(u>=100||u<=1000)
  {cout<<"\nunit rate = 10";
  p=u*10;
  }
  else if (u>1000)
 {cout<<"\nunit rate =20 ";
  p=u*20;
  }
 cout<<"\nprice ="<<p;


 }














       void elec::show()


      { clrscr();
	cout<<"\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/";
	cout<<"\n             BILL                              ";
	cout<<"\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*";
	  cout<<"\n cano "<<cano;
	  cout<<"\n name "<<name;
	  cout<<"\n phone no "<<phno;
	  cout<<"\n totlal quantity "<<u;
	  cout<<"\n total amount "<<p;
	cout<<"\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/";
	cout<<"\n         THANK YOU                            ";
	cout<<"\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/";








	}



	void elec::modify()
	{ cout<<"\cano  "<<cano;
	  cout<<"\nname  "<<name;
	  cout<<"\nphone no "<<phno;
	  char s[20];
	   long long long a;
	  cout<<"\nenter new name , press'n' to reatin old one   ";
	  gets(s);
	  cout<<"\nenter new phone no ,press'0'to retain old one    ";
	  cin>>a;
	  if(strcmp(s,"n")!=0)
	  strcpy(name,s);


	  if(a!=0)
	  phno=a;


	  }










	void deph()
	{
	  clrscr();
	elec e,s;
	int a,f=0;
	char found,confirm;
	ifstream fin;
	ofstream fout;
	fin.open("cur.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	cout<<"\n enter the phno u want to delete ";
	cin>>a;
	while(!fin.eof())
	{  fin.read((char*)&e,sizeof(e));
	if(e.retphno()==a)
	   {f=1;
	e.show();

	cout<<"\n are u sure u want to delete this data (y/n) " ;
	cin>>confirm;
	if(confirm=='n')
	fout.write((char*)&e,sizeof(e));
		}
	else
	fout.write((char*)&e,sizeof(e));

       }
       if(found=='f')
       cout<<"\n record not found ";
       fin.close();
       fout.close();

	remove("cur.dat");
	rename("temp.dat","cur.dat");
	fin.open("cur.dat",ios::in);
	cout<<"\nnow the file contains ";
	while(!fin.eof())
	{
	 fin.read((char*)&s,sizeof(s));
	  if(fin.eof())
	  break;
	  s.show();
	  }
	  fin.close();


	  }













	void deca()
     {    clrscr();
	elec e,s;
	int a,f=0;
	char found,confirm;
	ifstream fin;
	ofstream fout;
	fin.open("cur.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	cout<<"\n enter the cano u want to delete ";
	cin>>a;
	while(!fin.eof())
	{  fin.read((char*)&e,sizeof(e));
	if(e.retcano()==a)
	   {f=1;
	e.show();

	cout<<"\n are u sure u want to delete this data (y/n) " ;
	cin>>confirm;
	if(confirm=='n')
	fout.write((char*)&e,sizeof(e));
		}
	else
	fout.write((char*)&e,sizeof(e));

       }
       if(found=='f')
       cout<<"\n record not found ";
       fin.close();
       fout.close();

	remove("cur.dat");
	rename("temp.dat","cur.dat");
	fin.open("cur.dat",ios::in);
	cout<<"\nnow the file contains ";
	while(!fin.eof())
	{
	 fin.read((char*)&s,sizeof(s));
	  if(fin.eof())
	  break;
	  s.show();
	  }
	  fin.close();


	  }










	void canos()
	{clrscr();
	int a,f=0;
	elec e;
	ifstream fin;
	cout<<"enter the cano to be searched ";
	cin>>a;
	fin.open("cur.dat",ios::in|ios::binary);
	if(!fin)
	cout<<"\n file cant be opened ";
	while(!fin.eof())
	  {
	fin.read((char*)&e,sizeof(e));
	if(e.retcano()==a)
	{f=1;
	e.show();
	 break;}

	 if(f==0)
	 {cout<<"\nno";
	 getch();
	 }
	  }
	 fin.close();
	 }
	 void dena()
	 { clrscr();
	elec e,s;
	int f=0;
	char a[20], found='f',confirm='n';
	ifstream fin;
	ofstream fout;
	fin.open("cur.dat",ios::in|ios::binary);
	fout.open("temp.dat",ios::out|ios::binary);
	cout<<"\n enter the name u want to delete ";
	gets(a);
	while(!fin.eof())
	{  fin.read((char*)&e,sizeof(e));
	if(strcmp(e.retname(),a)==0)
	   {f=1;
	e.show();
	found='t';
	cout<<"\n are u sure u want to delete this data (y/n) " ;
	cin>>confirm;
	if(confirm=='n')
	fout.write((char*)&e,sizeof(e));
		}
	else
	fout.write((char*)&e,sizeof(e));

       }
       if(found=='f')
       cout<<"\n record not found ";
       fin.close();
       fout.close();

	remove("cur.dat");
	rename("temp.dat","cur.dat");
	fin.open("cur.dat",ios::in);
	cout<<"\nnow the file contains ";
	while(!fin.eof())
	{
	 fin.read((char*)&s,sizeof(s));
	  if(fin.eof())
	  break;
	  s.show();
	  }
	  fin.close();


	  }












	void phnos()

       {clrscr();
       int a,f=0;
	elec e;
	ifstream fin;
	cout<<"enter the phno to be searched ";
	cin>>a;
	fin.open("cur.dat",ios::in|ios::binary);
	if(!fin)
	cout<<"\n file cant be opened ";
	while(!fin.eof())
	  {
	fin.read((char*)&e,sizeof(e));
	if(e.retphno()==a)
	{f=1;
	e.show();
	break;}
	  }
	  if(f==0)
	  {cout<<"no ";
	 getch();}
	 fin.close();
	 }




	void names()
	{clrscr();
	int f=0;
	char a[20];
	elec e;
	ifstream fin;
	cout<<"enter the name to be searched ";
	gets(a);
	fin.open("cur.dat",ios::in|ios::binary);
	if(!fin)
	cout<<"\n file cant be opened ";
	while(!fin.eof())
	  {
	fin.read((char*)&e,sizeof(e));
	if(strcmp(e.retname(),a)==0)
	{f=1;
	e.show();
	break;}
	  }
	  if(f==0)
	  {cout<<"file cant be opened ";
	 getch();
	 }
	 fin.close();
	 }












       void main()
       {int a=0;
       do
       {
       clrscr();
       cout<<"                               ------------------------- ";
cout<<"\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--|UNITS<100 UNIT RATE =5! |------------ " ;
cout<<"\n!WELCOME TO BSES RAJDHANI LTD.!|UNITS BETWEEN 100 & 1000 , UNIT RATE=10! ";
cout<<"\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--|UNITS>1000 UNIT RATE=20!-------------- ";
cout<<"                                        ------------------------";
cout<<"\nVERSION 2.0  [COPYRIGHT SHADE TECHNOLIGIES PVT. LTD] ";
       cout<<"\n 1.Create an entry ";
       cout<<"\n 2.Generate bill ";
       cout<<"\n 3.Search ";
       cout<<"\n 4.Delete ";
       cout<<"\n 5.Update ";

       cout<<"\nenter ur choice ";
       cin>>a;
       switch(a)
       {
       case 1: wo();
       break;
       case 2: so();
       break;
       case 3: se();
       break;
       case 4: de();
       break;
       case 5: me();
       break;


       }
       }
       while(a>=1 && a<=5);

       }
       void wo()
       {char ans='y';
       ofstream fout;
       fout.open("cur.dat",ios::out|ios::binary);
       if(!fout)
       cout<<"\n file cant be opened ";
       while(ans=='y'||ans=='Y')
       {ob.add();
       fout.write((char*)&ob,sizeof(ob));
       cout<<"\nDo you want to add more";
       cin >>ans;
       clrscr();
       }
       fout.close();

       }
       void so()
       {
       ifstream fin;
       fin.open("cur.dat",ios::in|ios::binary);
       if(!fin)
       cout<<"\nfile cant be opened ";
      while( fin.read((char*)&ob,sizeof(ob)))
       {ob.show();
       getch();}
	fin.close();
	}
	void se()
	{int a;

	clrscr();


	cout<<"1.search by cano"<<endl;
	cout<<"2.search by phno"<<endl;


	cout<<"3.search by name "<<endl;
	cout<<"enter ur choice "<<endl;
	cin>>a;
	switch(a)
	 {case 1: canos();
	break;
	case 2: phnos();
	break;
	case 3: names();
	break;

	}



	getch();
	}

	void de()
	{ int a;
	clrscr();
	cout<<"\n1.delete by cano ";
	cout<<"\n2.delete by name ";
	cout<<"\n3.delte by phno ";
	cout<<"\n enter ur choice ";
	cin>>a;
	switch(a)
	{ case 1: deca();
	break;
	case 2: dena();
	break;
	case 3: deph();
	break;

	}

	getch();
	}




	void me()
	{clrscr();
	elec e,s;
	fstream fio;
	clrscr();
	fio.open("cur.dat",ios::in|ios::out|ios::binary);
	int a;
	long pos;
	char found;
	cout<<"\n enter the existing cano ";
	cin>>a;
	while(!fio.eof())
	{pos=fio.tellg();
	fio.read((char*)&e,sizeof(e));
	if(e.retcano()==a)
	  { e.modify();
	  fio.seekg(pos);
	  fio.write((char*)&e,sizeof(e));
	  found='t';
	  break;
	  }
	}
	if(found=='f')
	cout<<"\n record not found  ";
	fio.seekg(0);
	cout<<"\n now the file contains ";
	while(!fio.eof())
	{
	 fio.read((char*)&s,sizeof(s));
	  s.show();
	  }
	  fio.close();
	  }



