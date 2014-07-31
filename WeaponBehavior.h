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
		std::cout<<"����ذ�ף�"<<std::endl;
	}
};

class BowAndArrowBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"���ù�����"<<std::endl;
	}
};

class AxsBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"���ø�ͷ��"<<std::endl;
	}
};

class SwordBehavior:public WeaponBehavior
{
public:
	virtual void useWeapon()
	{
		std::cout<<"���ñ���"<<std::endl;
	}
};