// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "chocolate.h"

using namespace std;

int main()
{
	class chocolate a,b,c;
	a.name="mars";
	a.weight=100;
	a.with_nuts=0;

	b.name="snikers";
	b.weight=150;
	b.with_nuts=1;

	c.name="twix";
	c.weight=140;
	c.with_nuts=0;
	
	cout << "Chokolate1" << a.name << " Weight " << a.weight<<endl;
	if (a.with_nuts==0) cout << "with nuts"; else "no nuts";

	cout << "Chokolate2" << b.name << " Weight " << b.weight<<endl;
	if (b.with_nuts==1) cout << "with nuts"; else "no nuts";

	cout << "Chokolate3" << c.name << " Weight " << c.weight<<endl;
	if (c.with_nuts==0) cout << "with nuts"; else "no nuts";
	system("pause");

	return 0;

}


