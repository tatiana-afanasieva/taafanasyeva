#include "stdafx.h"
#include <iostream>
#include <string>
#define N 10

using namespace std;

class Time
{
private:
	long hours;
	unsigned char minutes;
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
	bool operator<(Time & minusTime);
	bool operator>(Time & minusTime);
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
		while (result.minutes>=60)
		{
			result.minutes=result.minutes-60;
			result.hours=result.hours+1;
	}
	return result;
}

bool Time::operator<(Time & minusTime)
{
	Time result;
	if (this->hours <  minusTime.hours) return true;
	else 
	if (this->hours >  minusTime.hours) return false;
	else 
	if (this->minutes <  minusTime.minutes) return true;
	else 
	if (this->minutes >  minusTime.minutes) return false;
	else 
	return false;
}

void main()
{
	Time a[10];
	int i,j,b;
	a[0].setTime(5,30);
	a[1].setTime(3,50);
	a[2].setTime(1,50);
	a[3].setTime(4,10);
	a[4].setTime(16,43);
	a[5].setTime(23,17);
	a[6].setTime(4,56);
	a[7].setTime(12,20);
	a[8].setTime(13,15);
	a[9].setTime(7,34);
 
	for (i=0; i < 10-1; i++) {
        for (j=0; j < 10-i-1; j++) {
            if (a[j] > a[j+1]) {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
 
    for (i=0; i<10; i++) 
        printf("%3d", a[i]);
    printf("\n");

	system("pause");
}

