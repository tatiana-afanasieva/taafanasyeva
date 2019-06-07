// lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class idCard
{
private:
	int number;
	string dateExpire;
public:
	void setNumber(int newNumber)
	{
	number=newNumber;
	return;
	}
	int getNumber();
	void setDateExpire(string newDateExpire)
	{
	dateExpire=newDateExpire;
	return;
	}
	string getDateExpire();
	void print();
};
class Department;
class Employee
{
private:
	string position;
	int room;
	idCard* card;
	Department* department;
public:
	void setPosition(string newPosition)
	{
	position = newPosition;
	return;
	}
	string getPosition();
	void setIdCard(idCard* newIdCard)
	{
	card=newIdCard;
	return;
	}
	idCard* getIdCard();
	void setRoom(int newRoom)
	{
	room=newRoom;
	return;
	}
	int getRoom();
	void setDepartment(Department* newDepartment)
	{
	department=newDepartment;
	return;
	}
	Department* getDepartment;
	void print()
	{
	cout<< position<< ","<< room<< ","<< card<< "," <<department<<endl;
	}
};

class Department
{
private:
	string name;
	Employee* head;
public:
	void setName(string NewName)
	{
	name = NewName;
	return;
	}
	string getName();
	void setHead(Employee* newHead)
	{
	head=newHead;
	return;
	}
	Employee* getHead();
	void print()
	{
	cout<< name<< ","<< head<<endl;
	}
};
	int main()
	{
	Employee Ivan, Petr, Sidor, Mikhail, Alexsandra, Evgeniya;
	razrabotka.setName("Департамент разработка");
	razrabotka.setHead(&Ivan);
	administraziya.setName("департамент администрация");
	administraziya.setHead(&Mikhail);

	Ivan.setPosition("Glava Department");
	Ivan.setDepartment(&razrabotka);
	Ivan.setRoom(101);

	Petr.setPosition("Главный разработчик");
	Petr.setDepartment(&razrabotka);
	Petr.setRoom(102);

	Sidor.setPosition("разработчик");
	Sidor.setDepartment(&razrabotka);
	Sidor.setRoom(102);

	Mikhail.setPosition("Директор");
    Mikhail.setDepartment(&administraziya);
	Mikhail.setRoom(201);

	Alexsandra.setPosition("Зам директора");
    Alexsandra.setDepartment(&administraziya);
	Alexsandra.setRoom(201);

	Evgeniya.setPosition("Глав бух");
    Evgeniya.setDepartment(&administraziya);
	Evgeniya.setRoom(201);

	razrabotka.print();
	administraziya.print();

	system  ("pause");


	return 0;
	};
