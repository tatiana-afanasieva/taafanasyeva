#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Money
{
private:
	long rubles;
	unsigned char kops;
public:
	void setMoney(long newRubles, unsigned char newKops)
	{
		kops=newKops;
		rubles=newRubles;
	}
	long getMoney()
	{
		cout<< rubles<< ","<< (int)kops<<endl;
	}
	unsigned char getKops();
	Money operator+(Money & plusMoney);
	Money operator-(Money & minusMoney);
	Money operator*(int mulMoney);
	void print()
	{
		cout<<this->rubles<<"."<<(int)this->kops<<endl;
	}
};


Money Money::operator+(Money & plusMoney)
{
	Money result;
	result.rubles=this->rubles+plusMoney.rubles;
	result.kops=this->kops+plusMoney.kops;
	if (result.kops>=100)
	{
		result.kops=result.kops-100;
		result.rubles=result.rubles+1;
	}
	return result;
}

Money Money::operator-(Money & minusMoney)
{
	int v;
	Money result;
	result.rubles=this->rubles-minusMoney.rubles;
	v=this->kops-minusMoney.kops;
	if (v<0)
	{
		result.kops=v+100;
	}
	else
	{
		result.kops=v;
	}
	return result;
}

Money Money::operator*(int mulMoney)
{
	Money result;
	result.rubles=this->rubles*mulMoney;
	result.kops=this->kops*mulMoney;
		while (result.kops>=100)
		{
			result.kops=result.kops-100;
			result.rubles=result.rubles+1;
		}
	return result;
}

void main()
{
	Money a,b,c,d,e;
	a.setMoney(15,30);
	b.setMoney(73,80);
	c=a.operator+(b);
	d=a.operator-(b);
	e=a*2;
	c.print();
	d.print();
	e.print();
}

