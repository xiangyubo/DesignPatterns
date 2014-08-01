#include"Solider.h"
#include<iostream>
#include"Geometry.h"
Position Soldier::getPosition()
{
	return _pos;
}

void Infantry::walk(Position &pos)
{
	std::cout<<"步兵走到 x: "<<pos.x<<" y: "<<pos.y<<"位置"<<std::endl;
}

void Infantry::attack()
{
	std::cout<<"步兵攻击！"<<std::endl;
}

void Knight::walk(Position &pos)
{
	std::cout<<"骑士走到 x: "<<pos.x<<" y: "<<pos.y<<"位置"<<std::endl;
}

void Knight::attack()
{
	std::cout<<"骑士攻击！"<<std::endl;
}

void Cannon::walk(Position &pos)
{
	std::cout<<"矮人迫击炮走到 x: "<<pos.x<<" y: "<<pos.y<<"位置"<<std::endl;
}

void Cannon::attack()
{
	std::cout<<"矮人迫击炮攻击！"<<std::endl;
}