// lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
	long hours;
	unsigned char minutes;
	int f;
public:
	void setTime(long newHours, unsigned char newMinutes)
	{
		minutes=newMinutes;
		hours=newHours;
	}
	long getHours()
	{
		cout<< hours<< ","<< (int)minutes<<endl;
	}
	unsigned char getMinutes();
	Time operator+(Time & plusTime);
	Time operator-(Time & minusTime);
	Time operator*(int mulTimes);
	void print()
	{
		cout<<this->hours<<":"<<(int)this->minutes<<endl;
	}
};


Time Time::operator+(Time & plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60)
	{
		result.minutes=result.minutes-60;
		result.hours=result.hours+1;
	}
	return result;
}

Time Time::operator-(Time & minusTime)
{
	int v;
	Time result;
	result.hours=this->hours-minusTime.hours;
	v=this->minutes-minusTime.minutes;
	if (v<0)
	{
		result.hours=result.hours-1;
		result.minutes=v+60;
	}
	else
	{
		result.minutes=v;
	}
	return result;
}

Time Time::operator*(int mulTime)
{
	Time result;
	result.hours=this->hours*mulTime;
	result.minutes=this->minutes*mulTime;
	if (result.minutes>=60)
	{
		while (result.minutes>=60)
		{
			result.minutes=result.minutes-60;
			result.hours=result.hours+1;
		}
	}
	return result;
}

void main()
{
	Time a,b,c,d,e;
	a.setTime(5,30);
	b.setTime(3,50);
	c=a.operator+(b);
	d=a-b;
	e=a*2;
	c.print();
	d.print();
	e.print();
}
