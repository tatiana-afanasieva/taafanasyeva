
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class mage
{
private:
    int hp;
    int mp;
    string name="uninitalized";

public:
       void init(int newhp , int newmp, string newname)
	   {
	   this->hp=newhp;
	   this->mp=newmp;
	   this->name=newname;
	   }; 
	   
	   string getname()
	   {
	   return this->name;
	   };
	   
	   void say (string text)
	   {
	   cout << this->name << "say " << text; 
	   return;
	   };
	   
	   int cast (spell & spl, mage & target)
	   {
	   cout << this->name << " hits with " << spl.name << " bad guy " << target.getname() << endl;
	   target.hit(spl);
	   return 0;
	   };
	   
	   void hit (spell & spl)
	   {
	   this->hp=this->hp - spl.dhp;
	   if (hp < 0)
	   this-> say ("proigral");
	   return;
	   };
	   };

class spell 
{
public:
	string name;
	int dhp;
	int dmp;
};

int _tmain(int argc, _TCHAR* argv[])
{
	lesh', pendal;

	lesh'.dhp = 300;
	lesh'.dmp = 45;
	lesh'.name= "Лещ";

	pendal.dhp = 150;
	pendal.dmp = 300;
	pendal.name = "Пендаль";

	mage vanya, boris;

	vanya.init(400, 1000, "vanya");
	boris.init(400, 860, "boris");

	vanya.cast(pendal, boris);
	boris.cast(lesh', vanya);
	vanya.cast(pendal, boris);
	boris.cast(lesh', vanya);
	vanya.cast(pendal, boris);
	boris.cast(lesh', vanya);

	system("pause");

	return 0;
}

