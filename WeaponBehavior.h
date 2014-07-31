//#ifndef _IOS_
//#define _IOS_
#include<iostream>
//#endif
class WeaponBehavior
{
public:
	virtual void useWeapon() = 0;
};

class KnifeBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"在用匕首！"<<std::endl;
	}
};

class BowAndArrowBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"在用弓箭！"<<std::endl;
	}
};

class AxsBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"在用斧头！"<<std::endl;
	}
};

class SwordBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"在用宝剑"<<std::endl;
	}
};