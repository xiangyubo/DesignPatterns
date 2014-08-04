#ifndef _SOLDIER_
#define _SOLDIER_

#include<string>
class Soldier	//是不是可以和状态模式结合？
{				//此处作为一个基类，游戏中当作一个fightState
public:			//虽然会有类型Mixin，但是还是可以继承吧...再调研
	std::string name;
public:
	Soldier(const std::string &_name);
	void fight();
	virtual void getCloseToEnemy() = 0;
	virtual void attack()  = 0;
	void pause4NextAttack();
};

#endif