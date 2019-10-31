#include <iostream.h>
#include<string.h>
#include<conio.h>

class Teacher
{
public:
	char cName[20];
	Teacher()
	{
	cout<<"Hey Guys, I am a teacher"<<endl;
	strcpy(cName,"Amity");
	}
};

class MathTeacher: public Teacher
{
public:
	char mainSub[20];
	char name[20];
	MathTeacher()
	{
	cout<<"I am a Math Teacher"<<endl;
	strcpy(mainSub,"Math");
	strcpy(name,"Negan");
	}
};


void main()
{
clrscr();
  MathTeacher obj;
  cout<<"Name: "<<obj.name<<endl;
  cout<<"College Name: "<<obj.cName<<endl;
  cout<<"Main Subject: "<<obj.mainSub<<endl;
  getch();
}
