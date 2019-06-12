#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


class Money
{
private:
	long rubles;
	unsigned char kopey;

public:
       void setMoney(long newrubles, unsigned char newkopey)
       {
       	this->rubles=newrubles;
       	this->kopey=newkopey;
       };
      long getRubles()
	   {
	   	return this->rubles;
   	};
	   unsigned char getKopey()
	   {
	   	return this->kopey;
	   };
	   Money operator+(Money &plusMoney);
	   Money operator-(Money &minusMoney);
	   Money operator*(const int &mulMoney);
	   bool operator < (Money &minusMoney);
	   bool operator > (Money &minusMoney);
	   bool operator <= (Money &minusMoney);
	   bool operator >= (Money &minusMoney);
	   bool operator == (Money &minusMoney);
	   bool operator != (Money &minusMoney);
	   void print();
}

Money Money::operator+(Money &plusMoney)
{
	Money result;
	result.rubles=this->rubly+plusMoney.rubles;
	result.kopey=this->kopeek+plusMoney.kopey;

	if (result.kopey >= 100)
	{
		result.kopey=(result.kopey-100);
		result.rubles=(result.rubles+1);  
	}
	
	return result;
}

Money Money::operator-(Money &minusMoney)
{
	Money result;
	result.rubles=this->rubles-minusMoney.rubles;
	int i;
	i=this->kopey-minusMoney.kopey;

	if (i < 0)
	{
		result.rubles=result.rubles-1;
		result.kopey=i+100;
	}
	else
	{
		result.kopey=this->kopey-minusMoney.kopey;
	}

	return result;
}

Money Money::operator*(const int &mulMoney)
{
	Money result;
	result.rubles=this->rubles*mulMoney;
	result.kopey=this->kopey*mulMoney;

	while (result.kopey >= 100)
	{
		result.kopey=(result.kopey-100);
		result.rubles=(result.rubles+1);  
	}

	return result;

}

bool Money::operator< (Money &minusMoney)
{
	
	if (this->rubles < minusMoney.rubly) return true;
	else return false; 		
}

bool Money::operator> (Money &minusMoney)
{
	
	if (this->rubles > minusMoney.rubly) return true;
	else return false; 		
}

bool Money::operator<= (Money &minusMoney)
{
	
	if (this->rubles <= minusMoney.rubles) return true;
	else return false; 		
}

bool Money::operator>= (Money &minusMoney)
{
	
	if (this->rubles >= minusMoney.rubles) return true;
	else return false; 		
}

bool Money::operator== (Money &minusMoney)
{
	
	if (this->rubles == minusMoney.rubles) return true;
	else return false; 		
}

bool Money::operator!= (Money &minusMoney)
{
	
	if (this->rubles != minusMoney.rubles) return true;
	else return false; 		
}

 void Money::print()
 {
	 cout << rubles << "," << (int)kopey << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
	Money x,y;
	x.setMoney(4,30);
	y.setMoney(7,56);
	bool b2 = x > y;
    std::cout << b2 << std::endl;

	x.setMoney(67,55);
	y.setMoney(61,20);
	bool b3 = x < y;
    std::cout << b3 << std::endl;

	x.setMoney(4,90);
	y.setMoney(7,10);
	bool b4 = x <= y;
    std::cout << b4 << std::endl;

	x.setMoney(15,13);
	y.setMoney(1,17);
	bool b5 = x >= y;
    std::cout << b5 << std::endl;

	x.setMoney(2,22);
	y.setMoney(3,33);
	bool b6 = x == y;
    std::cout << b6 << std::endl;

	x.setMoney(4,44);
	y.setMoney(5,55);
	bool b7 = x != y;
    std::cout << b7 << std::endl;

    Money a,b,c;
	a.setMoney(6,66);
	b.setMoney(7,77);
	c=a+b;
	c.print();

	a.setMoney(8,88);
	b.setMoney(9,99);
	c=a-b;
	c.print();

	a.setMoney(0,00);
	int d =10;
	c=a*d;
	c.print();
	
	
	system("pause");	
}