#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
   std::string name;
   int year;
public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info()
	{
	cout<< this->name << "(" << this->year <<"год)";
	return;
	}
};

class Reader
{
private:
	string name;
	int age;
public:
	book chitbilet;
	void set_name(const char * new_name);
	void set_age(const int new_age);
	void get_info()
	{	
	cout<< this->name << "(" << this->age<<"лет)";
	chitbilet.get_info();
	return;
	};
};

   void Book::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void Book::set_year(const int new_year)
{
   this->year=new_year;
   return;
}

void Reader::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void Reader::set_age(const int new_age)
{
   this->age=new_age;
   return;
}


int _tmain(int argc, _TCHAR* argv[])
{
	book x;
	x.set_name (" War & Peace ");
    x.set_year (1869);
	x.get_info();
	system("PAUSE");

	book y;
	y.set_name (" Lord of Rings ");
	y.set_year (2002);
	y.get_info();
	system("PAUSE");

	book z;
	z.set_name (" Harry Potter & the Philosophers Stone");
	z.set_year (2002);
	z.get_info();

	system("PAUSE");

	


	Chitatel l;
	l.set_name ("Сидоров Сидор Сидорович");
	l.set_age (45);
	l.chitbilet = z;
	l.get_info();
	system("PAUSE");

	Chitatel k;				
	k.set_name ("Степанов Степан Степанович");
	k.set_age (22);
	k.chitbilet = y;
	k.get_info();
	system("PAUSE");

	Chitatel i;				
	i.set_name ("Сергеев Сергей Сергеевич ");
	i.set_age (30);
	i.chitbilet = x;
	i.get_info();
	system("PAUSE");


	return 0;
}

